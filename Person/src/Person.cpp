#include "Person.hpp"
#include <stdexcept>
#include <Gym.hpp>


Person::Person(int age, string name, string gender, double weight)
    : age(age), name(name), weight(weight) {
        if (gender == "male" || gender == "female") {
            this->gender = gender;
        } else {
            throw invalid_argument("Gender must be either 'male' or 'female'");
        }
    }

int Person::getAge() const { return age; }
string Person::getName() const { return name; }
string Person::getGender() const { return gender; }
double Person::getWeight() const { return weight; }

void Person::setName(const string& newName) { name = newName; }
void Person::setWeight(double newWeight) { weight = newWeight; }

void Person::birthday() { age++; }

float Person::lift(const Gym& gym) const {
    return gym.lift();
}

float Person::cardio(const Gym& gym) const {
    return gym.cardio();
}

