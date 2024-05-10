/* Write the following program: The user is asked to enter 2 floating point 
   numbers (use doubles). The user is then asked to enter one of the following 
   mathematical symbols: +, -, *, or /. The program computes the answer on the 
   two numbers the user entered and prints the results. If the user enters an 
   invalid symbol, the program should print nothing. */

#include <iostream>

double getDoubles()
{
  double x{};
  std::cout << "Please enter a floating point number: ";
  std::cin >> x;

  return x;
}

char getOperator()
{
  char x{};
  std::cout << "Please enter an operator (+, -, *, /): ";
  std::cin >> x;

  return x;
}

int main()
{
  double x{getDoubles()}, y{getDoubles()};
  char op{getOperator()};

  if(op == '+')
    std::cout << x << " + " << y << " is " << x+y << std::endl;

  else if(op == '-')
    std::cout << x << " - " << y << " is " << x-y << std::endl;

  else if(op == '*')
    std::cout << x << " * " << y << " is " << x*y << std::endl;
  
  else if(op == '/')
    std::cout << x << " / " << y << " is " << x/y << std::endl;

  else
    return 1;

  return 0;

}
