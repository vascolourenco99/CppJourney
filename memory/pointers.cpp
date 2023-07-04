#include <ctime>
#include <iostream>

int main()
{
  std::string name = "Bro";
  int age = 12;
  std::string freePizzas[3] = {"Pizza1", "Pizza2", "Pizza3"};
  int x = 123;
  int *pointer = nullptr;

  pointer = &x;

  if (pointer == nullptr)
  {
    std::cout << "address is null" << std::endl;
  }
  else
  {
    std::cout << "address was assigned" << std::endl;
  }

  std::string *pName = &name;
  int *pAge = &age;

  std::cout << pName << "\n";
  std::cout << *pName << "\n";

  return 0;
}