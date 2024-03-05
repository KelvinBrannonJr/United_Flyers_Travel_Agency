// FEATURES:
/*

1: Ask user what time of day in hour incements 1 - 24hr.
2: Ask user how many seats are needed? (Fixed rate per seat).
3: Ask user which class they would like to fly (Fixed rate per class).
4: 2 Free carry on luggage, (additional added cost per additional luggage).
5: Tally up all cost and output total price for trip.

*/

#include "EstimateCost.h"
#include<iostream>

// Constructor
Estimate::Estimate() {

}

Estimate::Estimate(int c_num_hours, int c_num_seats, int c_num_luggauge, SeatingClass c_seat_class) {
	this->time_hours = c_num_hours;
	this->num_of_seats = c_num_seats;
	this->num_of_luggage = c_num_luggauge;
	this->seat_class = c_seat_class;
}

// Estimate Setters
void Estimate::setHours(int s_hour) {
	time_hours = s_hour;
}

void Estimate::setNumOfSeats(int s_num_seats) {
	num_of_seats = s_num_seats;
}

void Estimate::setNumOfLuggage(int s_num_luggage) {
	num_of_luggage = s_num_luggage;
}

void Estimate::setSeatClass(SeatingClass e_seat_class) {
	seat_class = e_seat_class;
}


// Estimate Getters
int Estimate::getHours() const {
	return time_hours;
}

int Estimate::getNumOfSeats() const {
	return num_of_seats;
}

int Estimate::getNumOfLuggage() const {
	return num_of_luggage;
}

SeatingClass Estimate::getSeatClass() const {
	return seat_class;
}

/*
	CalcCost function should have multiple utility functions to handle individual business logic for each step.
	1: Implement utility hour converter for input of 24 hour format
	2: Implement utility to handle arithmetic for additional seats if any.
	3: Implemet utility to handle arithmetic for additional luggage if any.
	
*/



// Utility
int calcCost() {
	int hour;
	int seats;

	char additional_luggage_decision;
	int num_addtional_luggage = 0;

	std::cout << "What time of day would you like to depart? (1 - 24): " << std::endl;
	std::cin >> hour;
	// FEATURE: Add utility function to handle logic of converting hours format.

	std::cout << "How many seats would you like to reserve:?" << std::endl;
	std::cin >> seats;
	// FEATURE: Add utility function to handle logic of seats if addtional.

	std::cout << "Will you require addtional carry-on? (Y / N) :Note you are alotted 2 carry-on by default." << std::endl;
	std::cin >> additional_luggage_decision;
	if (additional_luggage_decision == 'Y' || additional_luggage_decision == 'y') {

		// FEATURE: Add utility function to handle logic of addtional luggage.
	}
	else if (additional_luggage_decision == 'N' || additional_luggage_decision == 'n') {
		// // FEATURE: Add utility function to handle logic of addtional luggage.
	}
	else {
		std::cout << "Sorry that was an invalid input" << std::endl;
	}

	
}

Estimate::~Estimate() {
	std::cout << "Estimate object destroyed" << std::endl;
}
