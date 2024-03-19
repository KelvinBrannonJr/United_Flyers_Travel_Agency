#include <iostream>
#include "MainUI.h"
#include "Planner.h"
#include "EstimateCost.h"
#include "Booking.h"
#include "Payment.h"


int main()
{	
	// FEATURE: implement <iomanip> for formatting
	std::cout << "Welcome to United Flyers" << std::endl;
	std::cout << "" << std::endl;

	try {
		isRunning = true;
		while (isRunning == true) {
			displayMenu();

			std::cin >> user_choice;
			menuSelection(user_choice);
		}
		throw std::runtime_error("Running routine in Main() while loop failed!");
	}
	catch (const std::exception& e) {
		std::cout << "Exception " << e.what() << std::endl;
	}
}

// Feature function for planning a trip
void planTrip() {
	Planner plan;
	plan.enterTripDetails();
	plan.printTrip();
}

// Enter customer flight options and estimate cost
void estimateTripCost() {
	Estimate tripCost;
	tripCost.calcCost();
}

// Enable booking of a flight and depatching flight info
void bookFlight() {
	Booking bkFlight;
	bkFlight.processBooking();
	bkFlight.confirmBookingPurchase();
}

void viewConfirmDetails() {
	Payment pay;
	pay.displayPaymentInformation();
}

// Utility UI display menu
void displayMenu() {
	std::cout << "Select an option from below:" << std::endl;
	std::cout << "P: Plan a Trip" << std::endl;
	std::cout << "E: Estimate Cost" << std::endl;
	std::cout << "B: Purchase and Book Flight" << std::endl;
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

