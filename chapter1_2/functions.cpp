// example of user defined functions

#include <iostream>

int add5(int i)
{
  return i + 5;
}

int minus5(int i)
{
  return i - 5;
}

int multiply5(int i)
{
  return i * 5;
}

float divide5(int i)
{
  return float(i) / 5;
}


int main()
{
  int input_int{};
  std::cout << "Enter an int: ";
  std::cin >> input_int;
  std::cout << "Add 5 is     : " << add5(input_int) << ".\n";
  std::cout << "Minus 5 is   : " << minus5(input_int) << ".\n";
  std::cout << "Multiply 5 is: " << multiply5(input_int) << ".\n";
  std::cout << "Divide 5 is  : " << divide5(input_int) << '.' << std::endl;

  return 0;
}
