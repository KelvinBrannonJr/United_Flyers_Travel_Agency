#include <iostream>
#include "MainUI.h"
#include "Planner.h"
#include "EstimateCost.h"
#include "Booking.h"


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

// Feature function for planning a trip
void planTrip() {
	std::string leaving_city;
	std::string leaving_state;
	std::string arriving_city;
	std::string arriving_state;

	std::cout << "What city are you flying from?: " << std::endl;
	std::cin >> leaving_city;	
	
	std::cout << "Ok, in what state are you leaving from?: " << std::endl;
	std::cin >> leaving_state;

	std::cout << "What is the city of your destination?: " << std::endl;
	std::cin >> arriving_city;

	std::cout << "Ok, what is the state of your destination?: " << std::endl;
	std::cin >> arriving_state;
	
	Planner plan(leaving_city,leaving_state,arriving_city,arriving_state);
	plan.printTrip();
}

// Enter customer flight options and estimate cost
void estimateTripCost() {
	int trip_total;

	Estimate tripCost;
	trip_total = tripCost.calcCost(); // Can use calCost() return value stored in 'trip_total' for logging details

	// Possibly change estimateTripCost() to return int from calcCost() for outside use.
}

// Enable booking of a flight and depatching flight info
void bookFlight() {
	Booking bkFlight;
	bkFlight.process_booking();
}

// Utility UI display menu
void displayMenu() {
	std::cout << "Select an option from below:" << std::endl;
	std::cout << "P: Plan a Trip" << std::endl;
	std::cout << "E: Estimate Cost" << std::endl;
	std::cout << "B: Purchase and Book Flight" << std::endl;
	std::cout << "V: View Confirmation details" << std::endl;
	std::cout << "Q: Quit" << std::endl;
	std::cout << std::endl;

}

// Utility function to handle the user menu selection
void menuSelection(char choice) {
	switch (user_choice) {
	case 'P':
	case 'p':
		std::cout << user_choice << ": Nice, you would like to plan a trip!" << std::endl;
		planTrip();
		break;

	case 'E':
	case 'e':
		std::cout << user_choice << ": You would like a price estimate of a for a trip." << std::endl;
		estimateTripCost();
		break;

	case 'B':
	case 'b':
		std::cout << user_choice << ": You would like to purchase a ticket and book the flight." << std::endl;
		bookFlight();
		break;

	case 'V':
	case 'v':
		std::cout << user_choice << ": View your confirmation details." << std::endl;
		break;

	case 'Q':
	case 'q':
		std::cout << user_choice << ": Quitting Application..Goodbye" << std::endl;
		quitUI();
		break;

	default:
		std::cout << user_choice << ": Sorry that was an invalid choice.." << std::endl;
		break;
	}
	std::cout << std::endl;
}

// Utility UI function checks user input to quit while loop in main
bool quitUI() {
	if (user_choice == 'Q' or user_choice == 'q') {
		isRunning = false;
	}
	return isRunning;
}

