#include <Gym.hpp>
#include <Person.hpp>
#include <stdexcept>

//implements person from person.hpp and sets the variables then checks if the input is either male or female if its not then the function outputs an error message
Person::Person( int age, string name, string gender, double weight ) : age( age ), name( name ), weight( weight )
{
    if ( gender == "male" || gender == "female" ) {
        this->gender = gender;
    }
    else {
        throw invalid_argument( "Gender must be either 'male' or 'female'" );
    }
}

//implementation of getters 
int    Person::getAge() const { return age; }
string Person::getName() const { return name; }
string Person::getGender() const { return gender; }
double Person::getWeight() const { return weight; }

//implementation of setters 
void Person::setName( const string & newName ) { name = newName; }
void Person::setWeight( double newWeight ) { weight = newWeight; }

//birthday function that takes an input age and increases it by 1 
void Person::birthday() { age++; }

//creates a instance of lift in person
float Person::lift( const Gym & gym )
{
    // the ratio at which we increase our weight
    double factor = ( 100 + gym.lift() ) / 100.f;
    double newWeight( getWeight() * factor );
    setWeight( newWeight );
    return getWeight();
}

//creates a instance of cardio in person
float Person::cardio( const Gym & gym )
{
    // the ratio at which we increase our weight
    double factor = ( 100 + gym.cardio() ) / 100.f;
    //initializes newWeight to the newWeight by multiplying the original weight by factor
    double newWeight( getWeight() * factor );
    //sets the current weight to newWeight
    setWeight( newWeight );
    //returns the newWeight
    return getWeight();
}
