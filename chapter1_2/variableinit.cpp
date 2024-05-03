// different methods of intializing variables
#include <iostream>
using namespace std;

int main()
{
  int a = 5; // c-like initialization
  int b(3); // constructor initialization
  int c{44}; // uniform initialization
  int result;

  a += b;
  result = a - c;
  cout << result << "\n";

  return 0;
}



