#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        /* verifie si il ya le nombre exact d'argument*/
        std::cerr << "Error argument" << std::endl;
        return(1);
    }
    std::string line;
    std::string s1(av[2]);
    std::string s2(av[3]);
    std::string filename(av[1]);
    /* on ouvre le fichier en lecture*/
    std::ifstream ifs(filename);
    for(int i = 1; i < 4; i++)
    {
        /* verifie si un argument est vide */
        std::string tmp = av[i];
        if (!tmp.size())
        {
            std::cerr << "Ta chaine est vide" << std::endl;
            return (1);
        }
    }
    /*rajoute le .replace pour le nom du nouveau fichier */
    filename.replace(filename.size(), 0, ".replace");
    /* ouverture en mode ecriture, il cree le fichier vu qu'il nexiste pas avec le .replace */
    std::ofstream ofs(filename.c_str());
    if (!ofs || !ifs)
    {
        std::cerr << "Open file Error" << std::endl;
        return (1);
    }
    while (std::getline(ifs, line))
    {  
        /* tant qu'il y a le mot s1 dans la ligne on le remplace et toute la ligne remplacer on la met dans le nouveau fichier*/
       while(line.find(s1) != std::string::npos)
       {
            line.replace(line.find(s1), s1.size(), s2);
       }
        ofs << line << std::endl;
    }
    return (0);
}