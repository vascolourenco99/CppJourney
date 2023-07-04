#include <iostream>

char computerChoice();
void chooseWinner(char player, char computer);

int main()
{
  char userChoice;
  char computer = computerChoice();

  bool validChoice = false;
  while (!validChoice)
  {
    std::cout << "Please enter your choice (R, P, S): ";
    std::cin >> userChoice;

    userChoice = toupper(userChoice);

    if (userChoice == 'R' || userChoice == 'P' || userChoice == 'S')
    {
      validChoice = true;
    }
    else
    {
      std::cout << "Invalid choice. Please enter a valid choice.\n";
    }
  }

  chooseWinner(userChoice, computer);
  std::cout << "Computer choice: " << computer << "\n";
  std::cout << "Your choice: " << userChoice << "\n";
  return 0;
}

void chooseWinner(char player, char computer)
{
  if (player == computer)
  {
    std::cout << "It's a draw!\n";
  }
  else if ((player == 'R' && computer == 'S') || (player == 'S' && computer == 'P') || (player == 'P' && computer == 'R'))
  {
    std::cout << "You won!\n";
  }
  else
  {
    std::cout << "You lost!\n";
  }
}

char computerChoice()
{
  srand(time(NULL));
  int randomNumber = (rand() % 3) + 1;

  switch (randomNumber)
  {
  case 1:
    return 'R';
  case 2:
    return 'P';
  case 3:
    return 'S';
  }

  return '\0';
}
