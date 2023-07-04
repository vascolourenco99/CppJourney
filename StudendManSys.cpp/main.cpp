#include <iostream>
#include <string>
#include <fstream>

const std::string DATA_FILE = "db.txt";
const int MAX_STUDENTS = 2;
const int MAX_ATTRIBUTES = 5;

struct Student
{
  std::string name;
  std::string age;
  std::string grade;
  std::string role;
  std::string password;
};

Student students[MAX_STUDENTS];

void writeStudent();
void loadStudents();
void saveStudents();
void login(std::string &name, std::string &password);
bool checkPassword(const std::string &name, const std::string &password);
void showActions();
void displayNote(const std::string &name, const std::string &password);
void editProfile(const std::string &name, const std::string &password);

int main()
{
  int answer;
  std::cout << "Welcome! Choose an action: \n";
  std::cout << "1 - Create a profile \n";
  std::cout << "2 - See profile details \n";
  std::cout << "--------------------------\n";
  std::cin >> answer;

  switch (answer)
  {
  case 1:
    std::cin.ignore();
    writeStudent();
    break;

  case 2:
    std::cin.ignore();
    std::string name;
    std::string password;
    bool found = false;
    loadStudents();
    login(name, password);
    found = checkPassword(name, password);
    if (!found)
    {
      std::cout << "The user does not exist. \n";
    }
    else
    {
      std::string choice;
      std::cout << "Hello, " << name << "\n";
      while (choice != "q")
      {
        showActions();
        std::cin >> choice;

        if (choice == "1")
        {
          std::cin.ignore();
          displayNote(name, password);
        }
        else if (choice == "2")
        {
          std::cin.ignore();
          editProfile(name, password);
          saveStudents();
        }
        else
        {
          std::cout << "Wrong input. Try again.\n";
        }
      }
    }

    break;
  }

  return 0;
}

void editProfile(const std::string &name, const std::string &password)
{
  std::cout << "Editing profile for " << name << ":\n";

  std::string newName;
  std::cout << "Enter your new name: \n";
  std::getline(std::cin, newName);

  std::string newAge;
  std::cout << "Enter your new age: \n";
  std::getline(std::cin, newAge);

  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    if (students[i].name == name && students[i].password == password)
    {
      students[i].name = newName;
      students[i].age = newAge;
      break;
    }
  }

  std::cout << "Profile updated successfully.\n";
}

void displayNote(const std::string &name, const std::string &password)
{
  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    if (students[i].name == name && students[i].password == password)
    {
      std::cout << "Your average grade is: " << students[i].grade << "\n";
      break;
    }
  }
}

void showActions()
{
  std::cout << "\n";
  std::cout << "-------------------------------\n";
  std::cout << "Display the notes: press 1\n";
  std::cout << "Edit your profile: press 2\n";
  std::cout << "Quit the program: press q\n";
}

bool checkPassword(const std::string &name, const std::string &password)
{
  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    if (students[i].name == name && students[i].password == password)
      return true;
  }
  return false;
}

void login(std::string &name, std::string &password)
{
  std::cout << "Enter your name: \n";
  std::getline(std::cin, name);
  std::cout << "Enter your password: \n";
  std::getline(std::cin, password);
}

void saveStudents()
{
  std::ofstream file(DATA_FILE);
  if (!file)
  {
    std::cout << "Failed to open data file.\n";
    return;
  }

  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    file << students[i].name << "\n";
    file << students[i].age << "\n";
    file << students[i].grade << "\n";
    file << students[i].role << "\n";
    file << students[i].password << "\n";
  }

  file.close();
}

void writeStudent()
{
  std::ofstream file(DATA_FILE);

  if (!file)
  {
    std::cout << "The file does not exist \n";
    return;
  }

  std::string newStudent[MAX_ATTRIBUTES];
  int size = sizeof(newStudent) / sizeof(newStudent[0]);
  std::string outputs[MAX_ATTRIBUTES] = {"Enter Your Name: \n", "Enter your age: \n", "Enter your grade: \n", "Enter your role: \n", "Enter your password: \n"};
  std::string temp;

  std::cout << "Write your personal info: \n";
  for (int i = 0; i < size; i++)
  {
    std::cout << outputs[i];
    std::getline(std::cin, temp);
    newStudent[i] = temp;
  }

  for (int i = 0; i < size; i++)
  {
    file << newStudent[i] << "\n";
  }

  file.close();
}

void loadStudents()
{
  std::ifstream file(DATA_FILE);

  if (!file)
  {
    std::cout << "The file does not exist \n";
    return;
  }

  for (int i = 0; i < MAX_STUDENTS; i++)
  {
    std::getline(file, students[i].name);
    std::getline(file, students[i].age);
    std::getline(file, students[i].grade);
    std::getline(file, students[i].role);
    std::getline(file, students[i].password);
  }

  file.close();
}
