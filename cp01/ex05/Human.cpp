#include "Human.hpp"

Human::Human()
{}

Human::~Human()
{}

Brain &Human::getBrain()
{
    return (instanceBrain);
}

std::string Human::identify()
{
    return (instanceBrain.identify());
}