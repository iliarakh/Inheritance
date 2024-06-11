#include "BodyBuilder.hpp"
#include <iostream>

using namespace std;

int main() {
    // Create a BodyBuilder object
    BodyBuilder ronny(30, "Ronny Coleman", "male", 200.0);

    // Display initial details
    cout<< "Initial Details:\n";
    cout << "Name: " << ronny.getName() << "\n";
    std::cout << "Weight: " << ronny.getWeight() << "\n";

    // Perform cut, bulk, and lift operations
    ronny.cut();
    cout << "\nAfter cut:\n";
    cout << "Weight: " << ronny.getWeight() << "\n";

    ronny.bulk();
    cout << "\nAfter bulk:\n";
    cout << "Weight: " << ronny.getWeight() << "\n";

    ronny.lift();
    cout << "\nAfter lift:\n";
    cout << "Weight: " << ronny.getWeight() << "\n";

    return 0;
}
