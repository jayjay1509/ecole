
#include <iostream>
#include "calculatrice.h"

int main()
{
	float a;
	float b;
	char c;

	std::cout << "nombre a :\t";
	std::cin >> a;
	
	std::cout << "nombre b :\t";
	std::cin >> b;

	std::cout << "operation :\t";
	std::cin >> c;

	if (c == '+')
	{
		std::cout << "somme =\t" << add(a, b);
	}
	else if (c == '-')
	{
		std::cout << "difference =\t" <<substract(a, b);
	}
	else if (c == '*')
	{
		std::cout << "produit =\t" << multiply(a, b);
	}
	else if (c == '/')
	{
		if (a == 0)
		{
			std::cout << "operation non valide ";
		}
		else 
		std::cout << "quotient =\t" << divide(a, b);
	}
	else
	{
		std::cout << "operation non valide ";
	}
}

