#include <BodyBuilder.hpp>

BodyBuilder::BodyBuilder( int age, string name, string gender, double weight ) : Person( age, name, gender, weight ) {}

// implementation of functions based on
void BodyBuilder::cut() { setWeight( getWeight() * 0.97 ); }
void BodyBuilder::bulk() { setWeight( getWeight() * 1.03 ); }

float BodyBuilder::lift( const Gym & gym )
{
    // a bodybuilder does what a person does twice
    Person::lift( gym );
    return getWeight();  // function returns new weight
}

float BodyBuilder::cardio( const Gym & gym )
{
    // a bodybuilder does what a person does twice
    Person::cardio( gym );
    return getWeight();  // function returns new weight
}