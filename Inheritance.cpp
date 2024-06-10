#include <string>
#include <iostream>

using namespace std;


class Person {
private:
    int age;
    string name;
    string gender;
    double weight;

public:
    Person(int age, string name, string gender, double weight)
        : age(age), name(name), weight(weight) {
            if (gender == "male" || gender == "female") {
                this->gender = gender;
            } else {
                throw invalid_argument("Gender must be either 'male' or 'female'");
            }
        }
};