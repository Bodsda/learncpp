#include <iostream>

void printStuff(char ch, int x)
{
  std::cout << "You entered '" << ch << "', which has ASCII code " << x << std::endl;
}

int main()
{
  char ch{};
  std::cout << "Enter a single character: ";
  std::cin >> ch;
  printStuff(ch, ch);

  return 0;
}
