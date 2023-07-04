#include <iostream>

struct student
{
  std::string name;
  double gpa;
  bool enrolled;
};

struct Car
{
  std::string model;
  int year;
  std::string color;
};

void printCar(Car &car);
void paintCar(Car &car, std::string color);

int main()
{
  Car car1;
  Car car2;

  car1.model = "Ford";
  car1.year = 2000;
  car1.color = "black";

  car2.model = "Renault";
  car2.year = 2010;
  car2.color = "black";

  std::cout << &car1 << std::endl;
  printCar(car1);
  paintCar(car1, "green");
  printCar(car1);
  return 0;
}

void printCar(Car &car)
{
  std::cout << &car << std::endl;
  std::cout << car.model << std::endl;
  std::cout << car.color << std::endl;
}

void paintCar(Car &car, std::string color)
{
  car.color = color;
}