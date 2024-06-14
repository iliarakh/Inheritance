#ifndef __INHERITANCE__BODYBUILDER__HPP__
#define __INHERITANCE__BODYBUILDER__HPP__


#include "Person.hpp"
#include <Gym.hpp>


class BodyBuilder : public Person {
public:
    BodyBuilder(int age, string name, string gender, double weight);

    void cut();
    void bulk();
    void lift();


    float lift(const Gym& gym) const override;
    float cardio(const Gym& gym) const override;
};

#endif