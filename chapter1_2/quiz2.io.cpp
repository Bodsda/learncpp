#include "quiz2.io.h"
#include <iostream>

int readNumber()
{
  int x{};
  std::cout << "Enter an int: ";
  std::cin >> x;
  return x;
}

void writeAnswer(int x)
{
  std::cout << "Sum of ints is: " << x << std::endl;
}
