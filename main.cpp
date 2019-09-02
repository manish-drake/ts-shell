#include <iostream>
#include "controller.h"

using namespace std;
#define UNUSED(x) (void)(x)

int main(int argc, char *argv[])
{
    UNUSED(argc);
    UNUSED(argv);

    Controller server;
    server.start();
    

    cin.ignore();
    return 0;
}
