// variables can also use auto or decltype as the type definition
// auto deduces the type from the init value
// decltype copies the type from another variable

#include <iostream>
using namespace std;

int main()
{
  int foo = 1;
  auto bar = 2;
  decltype(foo) foobar;

  return 0;
}

