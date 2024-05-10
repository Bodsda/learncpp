#include <iostream>

bool isEqual(int x, int y)
{
  return x==y;
}

int main()
{
  std::cout << "Enter 2 ints: ";
  int x{}, y{};
  std::cin >> x >> y;

  if(isEqual(x, y))
      std::cout << "X and Y are equal" << std::endl;
  else
      std::cout << "X and Y are not equal" << std::endl;

  return 0;
}
