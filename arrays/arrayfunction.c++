#include <iostream>

double getTotal(double array[], int size);

int main()
{
  double prices[] = {
      12.0,
      59.0,
      1.0,
  };
  int size = sizeof(prices) / sizeof(prices[0]);

  double total = getTotal(prices, size);
  std::cout << total << '$';
  return 0;
}

double getTotal(double array[], int size)
{
  double total = 0;
  for (int i = 0; i < size; i++)
  {
    total += array[i];
  }
  return total;
}