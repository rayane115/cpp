#include "Array.hpp"
#include "Array.cpp"

//[]	Accès aux membres d'un tableau, operateur de surcharge

int main()
{
    /*J'instencie ma class Array pour cree mon objet avec tout les type
    il n'y a que des tableau vide */
    Array <char > inst0;
    Array <std::string >inst1;
    Array <float >inst2;
    Array <int >inst3;
    Array <double >inst4;

	

    std::cout << "\e[31m\e[1m/**************test int *************/ " <<  "\e[0m" << std::endl;
	try
	{
    	Array <int> inst_int(6);

		inst_int[0] = 0;
		inst_int[1] = 1;
		inst_int[2] = 2;
		inst_int[3] = 3;
		inst_int[4] = 4;
		inst_int[5] = 5;
		std::cout << "inst_int[1] : " << inst_int[0] << std::endl;
		std::cout << "inst_int[2] : " << inst_int[1] << std::endl;
		std::cout << "inst_int[3] : " << inst_int[2] << std::endl;
		std::cout << "inst_int[4] : " << inst_int[3] << std::endl;
		std::cout << "inst_int[5] : " << inst_int[4] << std::endl;
		std::cout << "inst_int[6] : " << inst_int[5] << std::endl;
		std::cout << "taille du tableau = " << inst_int.size() << std::endl; 

		std::cout << "\e[31m\e[1m/**************test double *************/ " <<  "\e[0m" << std::endl;
		Array <double> inst_double(5);
		inst_double[0] = 0.5;
		inst_double[1] = 1.1;
		inst_double[2] = 2.2;
		inst_double[3] = 3.4;
		inst_double[4] = 4.4;
		std::cout << "inst_double[0] : " << inst_double[0] << std::endl;
		std::cout << "inst_double[1] : " << inst_double[1] << std::endl;
		std::cout << "inst_double[2] : " << inst_double[2] << std::endl;
		std::cout << "inst_double[3] : " << inst_double[3] << std::endl;
		std::cout << "inst_double[4] : " << inst_double[4] << std::endl;
		std::cout << "taille du tableau = " << inst_double.size() << std::endl;

		std::cout << "\e[31m\e[1m/**************test float *************/ " <<  "\e[0m" << std::endl;
		Array <float> inst_float(6);
		inst_float[0] = 0.5f;
		inst_float[1] = 1.1f;
		inst_float[2] = 2.2f;
		inst_float[3] = 3.4f;
		inst_float[4] = 4.4f;
		inst_float[5] = 5.5f;
		std::cout << "inst_float[0] : " << inst_float[0] << std::endl;
		std::cout << "inst_float[1] : " << inst_float[1] << std::endl;
		std::cout << "inst_float[2] : " << inst_float[2] << std::endl;
		std::cout << "inst_float[3] : " << inst_float[3] << std::endl;
		std::cout << "inst_float[4] : " << inst_float[4] << std::endl;
		std::cout << "inst_float[5] : " << inst_float[5] << std::endl;
		std::cout << "taille du tableau = " << inst_float.size() << std::endl;

		std::cout << "\e[31m\e[1m/**************test string *************/ " <<  "\e[0m" << std::endl;
		Array <std::string> inst_string(6);
		inst_string[0] = "rayane";
		inst_string[1] = "chara";
		inst_string[2] = "manelle";
		inst_string[3] = "niya";
		inst_string[4] = "yamina";
		inst_string[5] = "atef";
		std::cout << "inst_string[0] : " << inst_string[0] << std::endl;
		std::cout << "inst_string[1] : " << inst_string[1] << std::endl;
		std::cout << "inst_string[2] : " << inst_string[2] << std::endl;
		std::cout << "inst_string[3] : " << inst_string[3] << std::endl;
		std::cout << "inst_string[4] : " << inst_string[4] << std::endl;
		std::cout << "inst_string[5] : " << inst_string[5] << std::endl;
		std::cout << "taille du tableau = " << inst_string.size() << std::endl;

		std::cout << "\e[31m\e[1m/**************test char *************/ " <<  "\e[0m" << std::endl;
		Array <char> inst_char(6);
		inst_char[0] = 'r';
		inst_char[1] = 'a';
		inst_char[2] = 'y';
		inst_char[3] = 'a';
		inst_char[4] = 'n';
		inst_char[5] = 'e';
		std::cout << "inst_char[0] : " << inst_char[0] << std::endl;
		std::cout << "inst_char[1] : " << inst_char[1] << std::endl;
		std::cout << "inst_char[2] : " << inst_char[2] << std::endl;
		std::cout << "inst_char[3] : " << inst_char[3] << std::endl;
		std::cout << "inst_char[4] : " << inst_char[4] << std::endl;
		std::cout << "inst_char[5] : " << inst_char[5] << std::endl;
		std::cout << "taille du tableau = " << inst_char.size() << std::endl;

		/************************************test_deep constructeur par copy *******************************/

	//	Array <int> inst5(inst_int);

		/***********************************test_deep surcharge operator= ********************************/

	//	Array<char> inst6;

	//	inst6 = inst_char;


	//	std::cout << "inst6 test deep surcharge[5] : " << inst_char[5] << std::endl;
	//	inst6[5] = 'w';
	//	 std::cout << "inst6 test deep surcharge[5] apres modif : " << inst6[5] << std::endl;
	}

	catch(std::string const & erreur)
	{
		std::cout<< erreur << std::endl;
	}

    return 0;
}
