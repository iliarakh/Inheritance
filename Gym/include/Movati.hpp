#ifndef __INHERITANCE__MOVATI__HPP__
#define __INHERITANCE__MOVATI__HPP__

#include "Gym.hpp"

class Movati : public Gym {
public:
    float cardio() const override;
    float lift() const override;
};

#endif
