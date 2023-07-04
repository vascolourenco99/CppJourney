#include <iostream>

int main()
{
  srand(time(NULL));

  int num = (rand() % 3) + 1;
  switch (num)
  {
  case 1:
    std::cout << "Give a kiss.\n";
    break;
  case 2:
    std::cout << "Give a huge kiss.\n";
    break;
  case 3:
    std::cout << "Give a hug.\n";
    break;
  }

  return 0;
}