#include <stdlib.h>
#include "sensors.h"

int main(){
  if (sensorReadingTemperature() > 100){ shutdownServer(); }
  else {sleep(1000);}
  return 0;
}
