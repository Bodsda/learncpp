// example showing a forward declaration and usage of a function that is never defined

#include <iostream>

int add(int x, int y);

int main()
{
  std::cout << "The sum of 3 and 4 is " << add(3, 4) << std::endl;
  return 9;
}

