#include <iostream>
#include <string>
#include <windows.h>
#include <cmath>
#include <ctime>
#include <cstdlib>
void Karlowicz()
{
	srand(time(NULL));
	std::string slowa;
	slowa = "ABCDEFGHIJKLMNOPQRSTUWVXYZ";
	int i,j;
	bool k=1;
	while (k)
	{
		i = rand() % 26;
		j = rand() % 26;
		std::cout<<slowa[i%26]<<"ilosz "<<slowa[j%26]<<"arlowicz"<<std::endl;
		Sleep(500);
		if (i == 12 && j == 10)
		{
		k = 0;
		std::cout<<std::endl<<"Znalezlismy prawdziwego Milosza!";
	}
	
	}
}


main()
{
	srand(time(NULL));
	Karlowicz();
	return 0;
	
}
