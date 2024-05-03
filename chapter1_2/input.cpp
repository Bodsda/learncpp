#include <iostream>

int getInteger()
{
  std::cout << "Enter an int: ";
  int x{};
  std::cin >> x;
  return x;
}
