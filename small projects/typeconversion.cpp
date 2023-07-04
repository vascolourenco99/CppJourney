#include <iostream>

int main() {
  int correct = 8;
  int quesions = 10;
  double score = correct / (double)quesions * 100;
  std::cout << score << "%";
  return 0;
}