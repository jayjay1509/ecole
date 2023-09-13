
#include <iostream>
#include "calculatrice.h"

int main()
{
	float a;
	float b;
	char c;

	std::cout << "nombre a :\t";
	std::cin >> a;

	std::cout << "operation :\t";
	std::cin >> c;	

	std::cout << "nombre b :\t";
	std::cin >> b;



	if (c == '+')
	{
		std::cout << "somme =\t\t" << add(a, b);
	}
	else if (c == '-')
	{
		std::cout << "difference =\t\t" <<substract(a, b);
	}
	else if (c == '*')
	{
		std::cout << "produit =\t\t" << multiply(a, b);
	}
	else if (c == '/')
	{
		if (a == 0)
		{
			std::cout << "operation non valide ";
			return EXIT_FAILURE;
		}
		else 
		std::cout << "quotient =\t\t" << divide(a, b);
	}
	else
	{
		std::cout << "operation non valide ";
	}
	return EXIT_SUCCESS;
}


