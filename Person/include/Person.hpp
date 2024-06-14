#ifndef __INHERITANCE__PERSON__HPP__
#define __INHERITANCE__PERSON__HPP__

#include <string>
#include <Gym.hpp>

using namespace std;

class Person {
    
private:
    int age;
    string name;
    string gender;
    double weight;

public:
    Person(int age, string name, string gender, double weight);

    // Getters
    int getAge() const;
    string getName() const;
    string getGender() const;
    double getWeight() const;

    // Setters
    void setName(const string& newName);
    void setWeight(double newWeight);

    // Birthday function
    void birthday();

    virtual float lift(const Gym& gym) const;
    virtual float cardio(const Gym& gym) const;
};

#endif