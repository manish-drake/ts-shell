#ifndef CONTROLLER_H
#define CONTROLLER_H
#include <string>

#include "ts-router/router.h"
#include "ts-applications/gicbapp.h"
#include "ts-socks/endpoint.h"

using std::string;
class Controller
{
private:
  GicbApp app;
  Endpoint epApp;
  Endpoint epRoute;

public:
  Controller() : epApp("gicb"),
                 epRoute(6000)
  {
  }

  void start()
  {
    app.Service()->Bind(epApp.Service());
    Router::Instance()->Service()->Bind(epRoute.Service());

    app.Register("ipc:///tmp/app6000.ipc");
  }

  ~Controller()
  {
  }
};
#endif //CONTROLLER_H