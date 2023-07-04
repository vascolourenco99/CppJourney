#include <iostream>
#include <cmath>

double calculateHypotenuse(double sideA, double sideB) {
    return std::sqrt(std::pow(sideA, 2) + std::pow(sideB, 2));
}

int main() {
    std::cout << "Let's calculate the hypotenuse\n";

    double sideA, sideB;

    std::cout << "Give me the A side: ";
    std::cin >> sideA;

    std::cout << "Give me the B side: ";
    std::cin >> sideB;

    double hypo = calculateHypotenuse(sideA, sideB);
    std::cout << "The hypotenuse is " << hypo << "\n";

    return 0;
}