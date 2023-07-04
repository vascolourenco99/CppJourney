#include "iostream"

enum Anwser
{
  yes = 1,
  no = 0
};

int main()
{
  Anwser anw = yes;

  switch (anw)
  {
  case yes:
    std::cout << "Yes" << std::endl;
    break;
  case no:
    std::cout << "No" << std::endl;
    break;
  }
  return 0;
}