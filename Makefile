####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = 
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT -fPIC $(DEFINES)
CXXFLAGS      = -pipe -g -MMD -std=gnu++11 -Wall -W -D_REENTRANT -fPIC $(DEFINES)
INCPATH       = -I.
VPATH	      = .
LIBS          = -lreadline
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
DEBUG         = -g
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
TAR           = tar -cf
COMPRESS      = gzip -9f
LINK          = g++
LFLAGS        = 
AR            = ar cqs
RANLIB        = 
SED           = sed
STRIP         = strip

####### Output directory

OBJECTS_DIR   = ./build

####### Files
SOURCES       = $(wildcard *.cpp)
SOURCEO       = $(SOURCES:.cpp=.o) 
OBJECTS       = $(addprefix $(OBJECTS_DIR)/,$(SOURCEO))
DEPS          = $(OBJECTS:.o=.d)
DESTDIR       = .
TARGET        = target
####### Customized Vars
SOURCES	     += $(patsubst ts-router/%,%,$(wildcard ts-router/*.cpp))
SOURCES	     += $(patsubst ts-socks/%,%,$(wildcard ts-socks/*.cpp))
SOURCES	     += $(patsubst ts-messages/%,%,$(wildcard ts-messages/*.cpp))
SOURCES	     += $(patsubst ts-applications/%,%,$(wildcard ts-applications/*.cpp))
INCPATH	     += -Its-router -Its-socks -Its-messages -Its-applications -I/usr/local/include
VPATH        +=	ts-router ts-socks ts-messages ts-applications
LIBS         += -L/home/manish/git/ts-ui-DESKTOP-Debug/json-core -ljson-core -lzmq -pthread
#########################################

####### Build rules
$(OBJECTS_DIR)/%.o:%.c
	$(CC) -c $(CFLAGS) $(INCPATH) -o $@  $<

$(OBJECTS_DIR)/%.o:%.cpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o $@  $<
#########################################

####### Targets

first: all

all: $(TARGET)


$(TARGET): Makefile  $(OBJECTS_DIR) $(OBJECTS)
	$(LINK) $(LFLAGS) -o $(DESTDIR)/$(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

$(OBJECTS_DIR):
	$(MKDIR) $(OBJECTS_DIR)

clean: 
	$(DEL_FILE) $(OBJECTS) $(DEPS) $(DESTDIR)/$(TARGET)

env:
	@echo CC          : $(CC)
	@echo CFLAGS      : $(CFLAGS)
	@echo CXX         : $(CXX)
	@echo CXXFLAGS    : $(CXXFLAGS)
	@echo LINK        : $(LINK)
	@echo LFLAGS      : $(LFLAGS)
	@echo LIBS        : $(LIBS)
	@echo INCPATH     : $(INCPATH)
	@echo VPATH       : $(VPATH)
	@echo SOURCES     : $(SOURCES)
	@echo SOURCEO     : $(SOURCEO)
	@echo OBJECTS_DIR : $(OBJECTS_DIR)
	@echo OBJECTS     : $(OBJECTS)
	@echo DEPS     	  : $(DEPS)
	@echo DESTDIR     : $(DESTDIR)
	@echo TARGET      : $(TARGET)
	@echo OBJCOMP     : $(OBJCOMP)
	@echo Compile     : $(CXX) -c $(CXXFLAGS) $(INCPATH) -o
	@echo Link        : $(LINK) $(LFLAGS) -o $(DESTDIR)/$(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	@echo Clean       : $(DEL_FILE) $(OBJECTS) $(DEPS) $(DESTDIR)/$(TARGET)

-include $(DEPS)
