#include "Crypt.h"
#include <iostream>
#include <conio.h>

void Crypt::DisplayMessage() // Declaration for .h file
{
	
	std::cout << "The crypt keeper has awakened!\n";
	std::cout << "1. Enter the crypt\n2. Flee.\n";
	
	char ch = _getch();
	int choice = ch - '0';

	if (choice == 1) {
		std::cout << "WARNING: Unauthorized souls detected!\n";
		std::exit(0);
	}
	else if (choice == 2) {
		std::cout << "You have fled the crypt.\n";
		std::exit(0);
	}
	else {
		std::cout << "Invalid choice. Please try again.\n";
		std::exit(0);
	}
}