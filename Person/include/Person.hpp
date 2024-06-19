#ifndef __INHERITANCE__PERSON__HPP__
#define __INHERITANCE__PERSON__HPP__

#include <Gym.hpp>
#include <string>

using namespace std;

class Person { //class called person which is the base class of this current code 

private: // this is a private specifier that means these values cannot change   
    int    age;
    string name;
    string gender;
    double weight;

public: 
    Person( int age, string name, string gender, double weight ); //Persons contructs that are going to be used in the getters/setters

    // Getters
    int    getAge() const;
    string getName() const;
    string getGender() const;
    double getWeight() const;

    // Setters
    void setName( const string & newName );
    void setWeight( double newWeight );

    // Birthday function
    void birthday();

    // returns the new weight of the person in pounds
    virtual float lift( const Gym & gym );
    // returns the new weight of the person in pounds
    virtual float cardio( const Gym & gym );
};

#endif