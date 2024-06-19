#ifndef __INHERITANCE__BODYBUILDER__HPP__
#define __INHERITANCE__BODYBUILDER__HPP__

#include <Gym.hpp>
#include <Person.hpp>

class BodyBuilder : public Person { // creates an instance bodybuilder from the person class
public:
    BodyBuilder( int age, string name, string gender, double weight ); // takes paramaters age, gender, name, weight 

    void cut(); //function called cut     
    void bulk(); // function called bulk    
    void lifting(); //function called lift

    // returns the new weight of the person in pounds
    float lift( const Gym & gym ) override;
    // returns the new weight of the person in pounds
    float cardio( const Gym & gym ) override;
};

#endif