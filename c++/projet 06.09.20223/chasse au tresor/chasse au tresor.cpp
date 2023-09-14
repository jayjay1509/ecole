
#include <iostream>
#define width 8
#define height 16
void drawplayfield() {
	int cases[width * height]{
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,1,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
			0,0,0,0,0,0,0,0,
	};
	int a = 0;
	for (int row = 0; row < height; row++) {
		for (int column = 0; column < width; column++) {
			int case_state = cases[a++];
			// int index = row * 8 + clumn
			if (case_state == 0) {
				std::cout << '-' << '\t';
			}
			else
			{
				std::cout << 'x' << '\t';
			}
		}
		std::cout << '\n';
	}
}

void input() 
{
	int x;
	int y;
	std::cout << "coordonnee de recherche ?\n";

	std::cout << "x :";
	std::cin >> x;
	std::cout << "y :";
	std::cin >> y;

	//int result;
	
}
// il faut deux tappbleua 

int main()
{
	bool tresurefound = false;
	

	do
	{
		int idxSearch = input();

		if (cases[idxSearch] == 0)
		{
			std:: << "pas de tresor\n";
		}
		else
		{
			std:: << " tresor\n";
		}
		input();

		drawplayfield();

	} while (tresurefound == false);
	
	

		return EXIT_SUCCESS;
}

