#include <iostream>

int add(int x, int y)
{
  return x+y;
}

int multiply(int x, int y)
{
  return x*y;
}

void printAnswer(int x)
{
  std::cout << "Answer is: " << x << std::endl;
}

int main()
{
  int x{}, y{};
  std::cout << "Enter 2 ints: ";
  std::cin >> x >> y;

  printAnswer(add(x, y));
  printAnswer(multiply(x, y));

  return 0;

}

