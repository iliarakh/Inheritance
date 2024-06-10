#include "Person.hpp"

class BodyBuilder : public Person {
public:
    BodyBuilder(int age, string name, string gender, double weight);

    void cut();
    void bulk();
    void lift();
};
