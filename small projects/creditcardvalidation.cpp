#include <iostream>
#include <string>
#include <typeinfo>

// Luhn Algorithm

bool checkCard(const std::string &cardNumber);

int main()
{
  std::string creditCard = "79927398713";

  std::cout << (checkCard(creditCard) ? "This is a valid credit card" : "This is not a valid credit card") << std::endl;

  return 0;
}

bool checkCard(const std::string &cardNumber)
{
  int creditcard_leg = cardNumber.length();

  int nSum = 0, isSecond = false;
  for (int i = creditcard_leg - 1; i >= 0; i--)
  {
    int d = cardNumber[i] - '0';

    if (isSecond == true)
    {
      d = d * 2;

      nSum += d / 10;
      nSum += d % 10;

      isSecond = !isSecond;
    }
  }

  return (nSum % 10 == 0);
}