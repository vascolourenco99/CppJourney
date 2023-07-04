#include <iostream>

class Human
{
public:
  std::string name;
  std::string occupation;
  int age;

  void eat()
  {
    std::cout << "This person is eating\n";
  }

  void drink()
  {
    std::cout << "This person is drinking\n";
  }
};

class Car
{
public:
  std::string brand;
  std::string model;
  int miles;
  bool running = false;

  void turnTheCarOn()
  {
    running = true;
    std::cout << "The car is on" << std::endl;
  }

  void turnTheCarOff()
  {
    running = false;
    std::cout << "The car is off" << std::endl;
  }

  void isTheCarOn()
  {
    if (!running)
    {
      turnTheCarOff();
    }
    else
    {
      std::cout << "The car is on\n";
    }
  }
};

int main()
{
  Car car1;
  car1.brand = "Ferrari";
  car1.model = "f430";
  car1.miles = 100;

  car1.isTheCarOn();

  return 0;
}