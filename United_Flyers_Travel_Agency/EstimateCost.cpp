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
	this->time_hours = 0;
	this->num_of_seats = 0;
	this->num_of_luggage = 0;
	this->seat_class = DEFAULT;
}

Estimate::Estimate(unsigned int c_num_hours, unsigned int c_num_seats, unsigned int c_num_luggauge, SeatingClass c_seat_class) {
	this->time_hours = c_num_hours;
	this->num_of_seats = c_num_seats;
	this->num_of_luggage = c_num_luggauge;
	this->seat_class = c_seat_class;
}

// Estimate Setters
void Estimate::setHours(unsigned int s_hour) {
	time_hours = s_hour;
}

void Estimate::setNumOfSeats(unsigned int s_num_seats) {
	num_of_seats = s_num_seats;
}

void Estimate::setNumOfLuggage(unsigned int s_num_luggage) {
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


// Utility
void Estimate::convertHours(unsigned int hrs) {
	if (hrs > 0 && hrs <= 12) {
		std::cout << hrs << "am" << std::endl;
	}
	else if (hrs > 12 && hrs <= 24) {
		hrs = hrs - 12;
		std::cout << hrs << "pm" << std::endl;
	}
	else {
		std::cout << "Sorry that is not a valid hour between 1 - 24" << std::endl;
	}
}

int Estimate::calcSeatTotal(unsigned int num_seats, SeatingClass seat_tier) {
	int seat_total;
	switch (seat_tier) {
		case ECONOMY:
			return seat_total = (num_seats * RATE_PER_SEAT) * ECONOMY_SEAT_MODIFIER;
			break;
		
		case PREMIUM_ECONOMY:
			return seat_total = (num_seats * RATE_PER_SEAT) * PREMIUM_ECONOMY_SEAT_MODIFIER;
			break;

		case BUSINESS:
			return seat_total = (num_seats * RATE_PER_SEAT) * BUSINESS_SEAT_MODIFIER;
			break;

		case FIRST_CLASS:
			return seat_total = (num_seats * RATE_PER_SEAT) * FIRST_CLASS_SEAT_MODIFIER;
			break;
		
		case DEFAULT:
			std::cout << "Please enter a seat class" << std::endl;
			break;

		default:
			std::cout << "Enter a valid seat number and seat class" << std::endl;
	}
}

int Estimate::calcLuggageTotal(unsigned int num_luggage) {
	int luggage_total;
	if (num_luggage > 0 && num_luggage <= 2) {
		return luggage_total = 0;
	}
	else if (num_luggage > 2) {
		return luggage_total = num_luggage * ADDITIONAL_LUGGAGE_COST;
	}
	else {
		std::cout << "Sorry you did not enter a valid number for carry-on luggage" << std::endl;
	}
}

SeatingClass Estimate::strToEnumSeat(std::string str_tier) {
	if (str_tier == "ECONOMY") {
		return SeatingClass::ECONOMY;
	}

	else if (str_tier == "PREMIUM_ECONOMY") {
		return SeatingClass::PREMIUM_ECONOMY;
	}

	else if (str_tier == "BUSINESS") {
		return SeatingClass::BUSINESS;
	}

	else if (str_tier == "FIRST_CLASS") {
		return SeatingClass::FIRST_CLASS;
	}
	else {
		std::cout << "Sorry that is an invalid Seat Class Tier" << std::endl;
	}
}


int Estimate::calcCost() {
	unsigned int hour;
	unsigned int seats;
	std::string str_s_tier;
	SeatingClass s_tier;

	char additional_luggage_decision;
	int num_addtional_luggage = 0;

	std::cout << "What time of day would you like to depart? (1 - 24): " << std::endl;
	std::cin >> hour;

	convertHours(hour);

	std::cout << "How many seats would you like to reserve?" << std::endl;
	std::cin >> seats;

	std::cout << "What class seating would you like? |Options: DEFAULT, ECONOMY, PREMIUM_ECONOMY, BUSINESS, FIRST_CLASS|" << std::endl;
	std::cin >> str_s_tier;

	s_tier = strToEnumSeat(str_s_tier);
	calcSeatTotal(seats, s_tier);

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
