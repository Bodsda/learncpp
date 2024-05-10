#include <iostream>

bool isPrime(int x)
{
  if(x == 2 or x == 3 or x == 5 or x ==7)
    return true;
  else
    return false;
}

int main()
{
  std::cout << "Enter an int: ";
  int x{};
  std::cin >> x;

  if(isPrime(x))
    std::cout << "The digit is prime!" << std::endl;
  else
    std::cout << "The digit is not prime." << std::endl;

  return 0;
}

