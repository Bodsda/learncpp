#include <iostream>

//#define ENABLE_DEBUG

int main()
{
#ifdef ENABLE_DEBUG
  std::cerr << "Debugging is enabled";
#endif
  std::cout << "\nThis is a simple program" << std::endl;

  return 0;
}
