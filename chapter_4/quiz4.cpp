/* Extra credit: This one is a little more challenging.

Write a short program to simulate a ball being dropped off of a tower. 
To start, the user should be asked for the height of the tower in meters. 
Assume normal gravity (9.8 m/s2), and that the ball has no initial velocity 
(the ball is not moving to start). Have the program output the height of the 
ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not 
go underneath the ground (height 0).

Use a function to calculate the height of the ball after x seconds. 
The function can calculate how far the ball has fallen after x seconds using 
the following formula: distance fallen = gravity_constant * x_seconds2 / 2 */

#include <iostream>
#define GRAV_CONST 9.8

double ballHeight(int seconds, int start_height)
{
  if(seconds == 0)
    return start_height;

  int seconds_squared{seconds*seconds};
  return start_height - ((GRAV_CONST * seconds_squared) / 2);
}

void printStuff(int seconds, double height)
{
  if(height < 0)
    std::cout << "At " << seconds << " seconds, the ball is on the ground." << std::endl;

  else
    std::cout << "At " << seconds << " seconds, the ball is at height: " << height << " metres." << std::endl;
}

int main()
{
  int start_height{};
  std::cout << "Enter starting height: ";
  std::cin >> start_height;

  printStuff(0, ballHeight(0, start_height));
  printStuff(1, ballHeight(1, start_height));
  printStuff(2, ballHeight(2, start_height));
  printStuff(3, ballHeight(3, start_height));
  printStuff(4, ballHeight(4, start_height));
  printStuff(5, ballHeight(5, start_height));

  return 0;
}

