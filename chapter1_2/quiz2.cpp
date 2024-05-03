// chapter2 quiz from learncpp.com

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

int main()
{
  int x{readNumber()};
  int y{readNumber()};

  writeAnswer(x+y);
  return 0;
}




