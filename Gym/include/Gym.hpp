#ifndef __INHERITANCE__GYM__HPP__
#define __INHERITANCE__GYM__HPP__

class Gym { //creates the base class gym 

public:
    virtual double cardio() const = 0;  // returns the percentage by which the weight will increase
    virtual double lift() const   = 0;  // returns the percentage by which the weight will increase
};

#endif