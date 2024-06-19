#include <BodyBuilder.hpp>
#include <Crunch.hpp>
#include <Movati.hpp>
#include <Person.hpp>
#include <iostream>


int main()
{

    Crunch crunchGym;
    Movati movatiGym;

    Person      John( 25, "John Max", "male", 170.0 );
    BodyBuilder Ronny( 30, "Ronny Coleman", "male", 250.0 );

    std::cout << "Person at Crunch Gym:\n";
    std::cout << "Cardio: " << John.cardio( crunchGym ) << "\n";
    std::cout << "Lift: " << John.lift( crunchGym ) << "\n";

    std::cout << "BodyBuilder at Crunch Gym:\n";
    std::cout << "Cardio: " << Ronny.cardio( crunchGym ) << "\n";
    std::cout << "Lift: " << Ronny.lift( crunchGym ) << "\n";

    std::cout << "Person at Movati Gym:\n";
    std::cout << "Cardio: " << John.cardio( movatiGym ) << "\n";
    std::cout << "Lift: " << John.lift( movatiGym ) << "\n";

    std::cout << "BodyBuilder at Movati Gym:\n";
    std::cout << "Cardio: " << Ronny.cardio( movatiGym ) << "\n";
    std::cout << "Lift: " << Ronny.lift( movatiGym ) << "\n";

    return 0;
}
