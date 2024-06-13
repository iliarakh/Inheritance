#include "Person.hpp"
#include <Movati.hpp>
#include <Crunch.hpp>

class BodyBuilder : public Person {
public:
    BodyBuilder(int age, string name, string gender, double weight);

    void cut();
    void bulk();
    void lift();

class BodyBuilder : public Person {
public:
    float doCardio(Gym& gym) override {
        return 2 * Person::doCardio(gym); 
    }

    float doLift(Gym& gym) override {
        return 2 * Person::doLift(gym); 
    }

};
