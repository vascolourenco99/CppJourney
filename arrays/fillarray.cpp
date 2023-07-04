#include <iostream>

int main()
{
  const int SIZE = 99;
  std::string foods[SIZE];

  fill(foods, foods + (SIZE / 3), "pizza");
  fill(foods + (SIZE / 3), foods + (SIZE / 3) * 2, "hamburger");
  fill(foods + (SIZE / 3) * 2, foods + 100, "tuna");

  for (std::string food : foods)
  {
    std::cout << food << std::endl;
  }

  return 0;
}