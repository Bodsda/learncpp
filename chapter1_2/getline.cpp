// Example of using getline to get a string from cin
#include <iostream>
#include <string>

using namespace std;

int main()
{
  string mystr;
  int age;
  cout << "What is your name? ";
  getline(cin, mystr);
  cout << "Hello " << mystr << ".\n";
  cout << "How old are you? ";
  cin >> age;
  cin.ignore();
  cout << "What is your favourite anmial? ";
  getline(cin, mystr);
  cout << "I like " << mystr << " too.\n";

  return 0;
}
