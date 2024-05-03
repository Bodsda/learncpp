// Using forward declarations to reference a function before it's written

#include <iostream> 

int myadd(int a, int b);

int main()
{
  int x{}, y{};
  std::cout << "Enter 2 ints: ";
  std::cin >> x >> y;

  myadd(x, y);

  return 0;
}

int myadd(int a, int b)
{
  std::cout << a + b << std::endl;
  return 0;
}

