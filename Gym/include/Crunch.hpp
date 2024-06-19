#ifndef __INHERITANCE__CRUNCH__HPP__ // This means if not defined, if its not defined, it will only start if this has not been defined previously
#define __INHERITANCE__CRUNCH__HPP__ // This defines the macro '__INHERITANCE__CRUNCH__HPP__'

#include <Gym.hpp> // This includes the library 'Gym.hpp'

class Crunch : public Gym { // this creates a class crunch that inheritates from a base class gym, bassically crunch is a type of gym as gym is only an idea
public: // lets this information to be used outside the class
    // Cardio retruns the percentage of weight change (ex. returns -3 for a 3% decrease)
    double cardio() const override;
    // lift retruns the percentage of weight change (ex. returns +3 for a 3% increase)
    double lift() const override;
};

#endif //This marks the end of the conditional block