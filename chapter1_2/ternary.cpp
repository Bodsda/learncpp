// example usage of ternary operator
#include <iostream>
using namespace std;

int main()
{
  string mystring = "lol";
  string c = (mystring == "lol") ? "cats" : "dogs";
  cout << c << endl;
  mystring = "foo";
  c = (mystring == "lol") ? "cats" : "dogs";
  cout << c << endl;

  return 0;
}
