#include <iostream>

int isItHere(int numbers[], int size, int userNum);

int main()
{
  int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int size = sizeof(numbers) / sizeof(numbers[0]);
  int myNum;
  int index;

  std::cout << "Enter a number \n";
  std::cin >> myNum;

  index = isItHere(numbers, size, myNum);
  if (index != -1)
  {
    std::cout << "Your number is at index " << index << std::endl;
  }
  else
  {
    std::cout << "Your number is not at index" << std::endl;
  }
  return 0;
}

// linear search!
int isItHere(int numbers[], int size, int userNum)
{
  for (int i = 0; i < size; ++i)
  {
    if (numbers[i] == userNum)
    {
      return i;
    }
  }
  return -1;
}
