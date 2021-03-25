#include <iostream>
#include <windows.h>

int main()
{
	for(int i = 0; i < 256; ++i)
	{
		SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), i);
		std::cout << i << ' ';
	}
	std::cout << std::endl;
	SetConsoleTextAttribute (GetStdHandle(STD_OUTPUT_HANDLE), 7);
	std::cin.get();

	return 0;
}
