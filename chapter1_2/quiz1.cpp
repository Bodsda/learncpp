// learncpp.com quiz1

#include <iostream>

int main()
{
  int input_int1{};
  int input_int2{};

  std::cout << "Enter an integer: ";
  std::cin >> input_int1;
  std::cout << "Enter another integer: ";
  std::cin >> input_int2;

  std::cout << input_int1 << " + " << input_int2 << " is " << input_int1 + input_int2 << ".\n";
  std::cout << input_int1 << " - " << input_int2 << " is " << input_int1 - input_int2 << '.' << std::endl;

  return 0;
}

