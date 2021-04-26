#ifndef MAIN_HPP
# define MAIN_HPP

#include <iostream>

void * serialize(void);
Data * deserialize(void * raw);
struct Data { std::string s1; int n; std::string s2; };
#endif