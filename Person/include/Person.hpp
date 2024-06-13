#include <string>
#include <Movati.hpp>
#include <Crunch.hpp>

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

public:
    float doCardio(Gym& gym) {
        return gym.cardio();
    }

    float doLift(Gym& gym) {
        return gym.lift();
    }

};
