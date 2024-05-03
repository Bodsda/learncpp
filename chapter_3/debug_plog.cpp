#include <plog/Log.h>
#include "plog/Initializers/RollingFileInitializer.h"
#include <iostream>

int main()
{
  plog::init(plog::debug, "plog.log");
  PLOGD << "this is a log entry";

  std::cout << "Simples..." << std::endl;

  return 0;
}

