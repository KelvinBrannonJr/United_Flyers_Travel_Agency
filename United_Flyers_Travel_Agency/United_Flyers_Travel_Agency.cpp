#include <iostream>
#include "United_Flyers_Travel_Agency.h"


// TASK: Finish implementing rest of menu options for menuSelection() - 02/19/2024

// Utility UI display menu
void displayMenu() {
	std::cout << "Select an option from below:" << std::endl;
	std::cout << "P: Plan a Trip" << std::endl;
	std::cout << "E: Estimate Cost" << std::endl;
	std::cout << "B: Purchase and Book Flight" << std::endl;
	std::cout << "V: View Confirmation details" << std::endl;
	std::cout << "Q: Quit" << std::endl;
}

// Utility function to handle the user menu selection
void menuSelection(char choice) {
	switch (user_choice) {
		case 'Q':
		case 'q':
			std::cout << "Quitting Application..Goodbye" << std::endl;
			quitUI();
			break;

		default:
			break;
	}
}

// Utility UI function checks user input to quit while loop in main
bool quitUI() {
	if (user_choice == 'Q' or user_choice == 'q') {
		isRunning = false;
	}
	return isRunning;
}



int main()
{	
	// FEATURE: implement <iomanip> for formatting
	std::cout << "Welcome to United Flyers" << std::endl;
	std::cout << "" << std::endl;

	isRunning = true;
	while (isRunning == true) {
		displayMenu();
		std::cin >> user_choice;
		menuSelection(user_choice);
	}


}
