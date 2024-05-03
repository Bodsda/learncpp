// basic program that accepts int input and outputs the value multiplied by 2

#include <iostream>

int main()
{
  int input_int{0};
  std::cout << "Enter an int: ";
  std::cin >> input_int;
  std::cout << "Double " << input_int << " is " << input_int * 2 << ".\n";
  std::cout << "Triple " << input_int << " is " << input_int * 3 << "." << std::endl;

  return 0;
}

