#include <iostream>
#include <string>

int main()
{
  std::string yourname{};
  std::cout << "Enter your name: ";
  std::getline(std::cin >> std::ws, yourname);

  std::string colour{};
  std::cout << "Enter your favourite colour: ";
  std::getline(std::cin >> std::ws, colour);

  std::cout << "Your name is " << yourname << " and your favourite colour is " << colour << "." << std::endl;

  return 0;
}
