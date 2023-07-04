#include <iostream>
#include <string>

const std::string STUDENTS[2][5] = {{"Vasco Correia", "13", "A", "student", "1234"}, {"Francisca Correa", "13", "B", "student", "12345"}};

void Login(std::string &name, std::string &role, std::string &password);
bool checkPerson(const std::string &name, const std::string &role, const std::string &password);
void displayNotes(const std::string &name);
void editProfile(std::string &name, std::string &role);

int main()
{
  std::string name;
  std::string role;
  std::string password;
  bool found = false;

  std::cout << "Welcome to the School Management System. \n";

  Login(name, role, password);
  found = checkPerson(name, role, password);

  if (found)
  {
    std::cout << "Hi " << name << "\n";
    std::string answer;

    while (answer != "q")
    {
      std::cout << "\n";
      std::cout << "-------------------------------\n";
      std::cout << "Display the notes: press 1 \n";
      std::cout << "Edit your profile: press 2 \n";
      std::cout << "Quit the program: press q \n";

      std::getline(std::cin, answer);

      if (answer == "1")
      {
        displayNotes(name);
      }
      else if (answer == "2")
      {
        editProfile(name, role);
      }
      else if (answer != "q")
      {
        std::cout << "Invalid choice. Please try again.\n";
      }
    }
  }
  else
  {
    std::cout << "User does not exist.\n";
  }

  return 0;
}

void Login(std::string &name, std::string &role, std::string &password)
{
  std::cout << "Enter your name: \n";
  std::getline(std::cin, name);
  std::cout << "Enter your role: \n";
  std::getline(std::cin, role);
  std::cout << "Enter your password: \n";
  std::getline(std::cin, password);
}

bool checkPerson(const std::string &name, const std::string &role, const std::string &password)
{
  bool found = false;

  for (int i = 0; i < 2; i++)
  {
    if (STUDENTS[i][0] == name && STUDENTS[i][3] == role && STUDENTS[i][4] == password)
    {
      found = true;
      break;
    }
  }
  return found;
}

void displayNotes(const std::string &name)
{
  std::cout << "Displaying notes for " << name << ":\n";
  for (int i = 0; i < 2; i++)
  {
    if (STUDENTS[i][0] == name)
    {
      std::cout << "Your Avarege grade: " << STUDENTS[i][2] << "\n";
    }
  }
}

void editProfile(std::string &name, std::string &role)
{
  std::cout << "Editing profile for " << name << ":\n";

  std::cout << "Enter your new name: \n";
  std::getline(std::cin, name);

  std::cout << "Enter your new role: \n";
  std::getline(std::cin, role);

  std::cout << "Profile updated successfully.\n";
}