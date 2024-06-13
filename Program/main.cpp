#include "BodyBuilder.hpp"
#include <iostream>


int main() {
    // Create a BodyBuilder object
    BodyBuilder ronny(30, "Ronny Coleman", "male", 200.0);

    // Display initial details
    std::cout<< "Initial Details:\n";
    std::cout << "Name: " << ronny.getName() << "\n";
    std::cout << "Weight: " << ronny.getWeight() << "\n";

    // Perform cut, bulk, and lift operations
    ronny.cut();
    std::cout << "\nAfter cut:\n";
    std::cout << "Weight: " << ronny.getWeight() << "\n";

    ronny.bulk();
    std::cout << "\nAfter bulk:\n";
    std::cout << "Weight: " << ronny.getWeight() << "\n";

    ronny.lift();
    std::cout << "\nAfter lift:\n";
    std::cout << "Weight: " << ronny.getWeight() << "\n";

    return 0;
}