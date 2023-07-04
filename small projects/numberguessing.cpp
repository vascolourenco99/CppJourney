#include <iostream>

int main()
{
  srand(time(NULL));
  int randomNumber = (rand() % 3) + 1;
  int number;
  int tries = 0;

  std::cout << "Guess the number!\n";

  while (number != randomNumber)
  {
    std::cout << "Insert a number: \n";
    std::cin >> number;
    tries = tries + 1;

    if (number == randomNumber)
    {
      std::cout << "WOW! You Guess the number!\n";
      std::cout << "number = " << randomNumber << "\n";
      std::cout << "tries = " << tries << "\n";
    }
    else
    {
      std::cout << "You are wrong!\n";
    }
  }

  return 0;
}