#ifndef CONTEXT_H
#define CONTEXT_H
#include <zmq.hpp>

class Context
{
  private:
    Context();
    ~Context();
    static zmq::context_t* s_contextLocal;
  public:
    static zmq::context_t* Get()
    {
        if(!s_contextLocal   )
        {
            s_contextLocal    = new zmq::context_t(1);
        }
        return s_contextLocal;
    }
};
#endif //CONTEXT_H