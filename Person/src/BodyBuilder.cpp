#include "BodyBuilder.hpp"
#include <Gym.hpp>

BodyBuilder::BodyBuilder(int age, string name, string gender, double weight)
    : Person(age, name, gender, weight) {}

void BodyBuilder::cut() { setWeight(getWeight() * 0.97); }
void BodyBuilder::bulk() { setWeight(getWeight() * 1.03); }
void BodyBuilder::lift() { setWeight(getWeight() * 1.01); }

float BodyBuilder::lift(const Gym& gym) const {
    return 2 * gym.lift();
}

float BodyBuilder::cardio(const Gym& gym) const {
    return 2 * gym.cardio();
}