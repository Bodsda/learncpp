/* Write a program that asks the user to enter their full name and their age. 
   As output, tell the user the sum of their age and the number of letters in 
   their name (use the std::string::length() member function to get the length 
   of the string). For simplicity, count any spaces in the name as a letter. */

#include <iostream>
#include <string> 

std::string getName(std::string input_txt)
{
  std::string input_value{};
  std::cout << input_txt;
  std::getline(std::cin >> std::ws, input_value);

  return input_value;
}

int getAge(std::string input_txt)
{
  int input_value{};
  std::cout << input_txt;
  std::cin >> input_value;

  return input_value;
}

int main()
{
  std::string name{getName("Enter your full name: ")};
  int age{getAge("Enter your age: ")};

  std::cout << "Your age + length of name is: " << (age + static_cast<int>(name.length())) << std::endl;

  return 0;
}
