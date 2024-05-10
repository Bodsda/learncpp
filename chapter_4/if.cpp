#include <iostream>

int main()
{
  std::cout << "Enter an int: ";
  int x{};
  std::cin >> x;

  if(x == 0)
    std::cout << "X is zero" << std::endl;
  else if(x == 1)
    std::cout << "X is one" << std::endl;
  else
    std::cout << "X is not zero or one!" << std::endl;

  return 0;
}

