#include <iostream>
#include "United_Flyers_Travel_Agency.h"

// Utility UI function checks user input to quit while loop in main
bool runUI() {
	if (runUI_User_Choice == 'Q' or runUI_User_Choice == 'q') {
		isRunning = false;
	}
	return isRunning;
}

int main()
{	
	// Title header, implement <iomanip> for formatting
	std::cout << "Welcome to United Flyers" << std::endl;
	std::cout << "" << std::endl;

	isRunning = true;
	while (isRunning == true) {
		std::cout << "Select an option from below:" << std::endl;
		std::cout << "Q: Quit" << std::endl;

		std::cin >> runUI_User_Choice;
		runUI();
	}


}
