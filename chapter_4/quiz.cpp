#include <iostream>

int main()
{
  char ch{};
  std::cout << "Enter a single character: ";
  std::cin >> ch;
  std::cout << "You entered '" << ch << "', which has ASCII code " << static_cast<int>(ch) << std::endl;

  return 0;
}
