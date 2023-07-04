#include <iostream>

const double EURO = 0.915518;
const double POUND = 0.782093;

int convertCurrency(double amount, int currency) {
  switch (currency)
  {
  case 1:
    return amount * EURO;
    break;
  case 2:
    return amount * POUND;
    break;
  default:
    std::cerr << "Invalid currency";
    return 0.0;
  }
}

int main(){
  std::cout << "Please choose your currency (1 - euro, 2 - pound): " << "\n";
  int currency;
  std::cin >> currency;

  std::cout << "Please add the amout(only numbers): " << "\n";
  double amout;
  std::cin >> amout;

  double total = convertCurrency(amout, currency);
   std::cout << "Total: " << total << "\n";
  
  return 0;
}