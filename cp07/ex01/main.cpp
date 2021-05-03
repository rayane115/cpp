#include "iter.hpp"

void    nothing(void & test)
{
    std::cout<< "salut je fais pas grand chose , mais ca marche" << std::endl;
}

int main()
{
    std::string prenom("rayane");
    int taille(6);

    iter(prenom, taille, &nothing);
    return 0;
}