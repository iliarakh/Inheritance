#ifndef __INHERITANCE__CRUNCH__HPP__
#define __INHERITANCE__CRUNCH__HPP__

#include "Gym.hpp"


class Crunch : public Gym {
public:
    float cardio() const override;
    float lift() const override;
};

#endif