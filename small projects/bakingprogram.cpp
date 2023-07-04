#include <iostream>

void showBalance(double balance);
void deposit(double value, double &wallet);
bool withdraw(double value, double &wallet);

int main()
{
  double walletBalance = 0.0;
  int numberchosen;
  std::string answer = "yes";

  std::cout << "Welcome to your Wallet!\n";

  while (answer != "no")
  {
    std::cout << "Choose one action:\n";
    std::cout << "1 - Show balance\n";
    std::cout << "2 - Deposit\n";
    std::cout << "3 - Withdraw\n";
    std::cin >> numberchosen;

    switch (numberchosen)
    {
    case 1:
      showBalance(walletBalance);
      break;
    case 2:
      double depositValue;
      std::cout << "Enter the deposit amount: ";
      std::cin >> depositValue;
      deposit(depositValue, walletBalance);
      break;
    case 3:
      double withdrawalAmount;
      std::cout << "Enter the withdrawal amount: ";
      std::cin >> withdrawalAmount;
      if (withdraw(withdrawalAmount, walletBalance))
      {
        std::cout << "Withdrawal successful!\n";
      }
      else
      {
        std::cout << "Insufficient funds for withdrawal!\n";
      }
      break;
    default:
      std::cout << "Wrong number chosen!\n";
      break;
    }

    std::cout << "Do you want to continue (yes/no)? ";
    std::cin >> answer;
  }

  return 0;
}

void showBalance(double balance)
{
  std::cout << "Balance: " << balance << std::endl;
}

void deposit(double value, double &wallet)
{
  wallet += value;
  std::cout << "Deposit successful!\n";
  showBalance(wallet);
}

bool withdraw(double value, double &wallet)
{
  if (wallet >= value)
  {
    wallet -= value;
    return true;
  }
  return false;
}