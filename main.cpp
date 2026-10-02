// main.cpp

#include <QApplication>

#include "traffic_light.h"

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);
  TrafficLight light;
  int ret;
  QTimer* timer = new Qtimer();

  // TO DO:
  // set up the timer and signal/slot connection here
  QObject::connect(timer, SIGNAL(timeout()), &light, SLOT(light_update()));


  light.show();

  timer->start(500);
  ret = app.exec();
  delete timer;
  return ret;
}

