#include <iostream>

class Car
{
public:
  std::string make;
  std::string model;
  int year;
  std::string color;

  Car(std::string make, std::string model, int year, std::string color)
  {
    this->make = make;
    this->model = model;
    this->year = year;
    this->color = color;
  }
};

int main()
{
  Car("Ferrari", "F430", 2003, "red");
  return 0;
}