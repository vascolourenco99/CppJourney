#include <iostream>
int factorial(int num);
int factorialRecursive(int num);

int main()
{
  std::cout << factorial(10) << std::endl;
  return 0;
}

int factorial(int num)
{
  int total = 1;

  for (int i = 1; i <= num; i++)
  {
    total = total * i;
  }
  return total;
}

int factorialRecursive(int num)
{
  if (num > 1)
  {
    return num * factorialRecursive(num - 1);
  }
  else
  {
    return 1;
  }
}