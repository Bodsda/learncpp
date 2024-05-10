#include <iostream>

int main()
{
  char ch1{}, ch2{}, ch3{}, ch4{};
  std::cout << "Input a char: ";
  std::cin >> ch1 >> ch2 >> ch3 >> ch4;
  std::cout << "You entered: " << ch1 << std::endl;
  std::cout << "The fourth char you entered was: " << ch4 << std::endl;


  return 0;
}

