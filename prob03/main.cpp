//Name: Kaylee Bliaya
// This program calculates a person's height in feet (') and inches (").
#include <iostream>

int main ()
{
  int height, feet, inches;

  //Ask the user's height in inches.
  std::cout<< "Please enter the person's height in inches: ";
  std::cin>> height;

  //Calculate the person's height in feet and inches.
  feet = height / 12;
  inches = height % 12;

  //Display the height in feet and inches.
  std::cout<< "That person is " << feet << '\'' <<inches<< "\"\n";

  return 0;
}
