#include <iostream>

int main()
{
  std::string cars[4] = {
      "Corvette",
      "Mustang",
      "Ford",
      "Mercedes"};

  double prices[4] = {5.00, 10.0, 9.99, 15.00};

  std::string name = "Vasco Correia";
  double gpa = 2.5;
  char grade = 'A';
  bool student = false;
  std::string students[] = {"Spongebob", "Patrick", "Squidward"};
  char grades[6] = {'a', 'b', 'c', 'd', 'e', 'f'};

  /* std::cout << sizeof(student) << " bytes\n";
  std::cout << sizeof(students) / sizeof(std::string) << " elements\n"; */

  for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
  {
    /* std::cout << students[i] << std::endl; */
  }

  // foreach loop = loopthat eases hte traversal over an iterable data set

  for (std::string student : students)
  {
    std::cout << student << std::endl;
  }

  return 0;
}