#ifndef __INHERITANCE__MOVATI__HPP__
#define __INHERITANCE__MOVATI__HPP__

#include <Gym.hpp>

class Movati : public Gym {
public:
    double cardio() const override;
    double lift() const override;
};

#endif
