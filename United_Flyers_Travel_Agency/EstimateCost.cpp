#include "EstimateCost.h"
#include<iostream>


// Constructor
Estimate::Estimate() {
	this->time_hours = 0;
	this->num_of_seats = 0;
	this->num_of_luggage = 0;
	this->seat_class = ECONOMY;
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
std::string Estimate::convertHours(unsigned int hrs) {
	std::string time;
	if (hrs > 0 && hrs < 12) {
		time = std::to_string(hrs) + "am";
		return time;
	}
	else if (hrs == 12) {
		time = std::to_string(hrs) + "pm";
		return time;
	}
	else if (hrs > 12 && hrs <= 24) {
		hrs = hrs - 12;
		time = std::to_string(hrs) + "pm";
		return time;
	}
	else {
		return time = "Sorry that is not a valid hour between 1 - 24";
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
	
		default:
			std::cout << "Sorry that is not a valid Seating class" << std::endl;
			return seat_total = 0;
	}
}

int Estimate::calcLuggageTotal(unsigned int num_luggage) {
	int luggage_total;
	if (num_luggage > 0 && num_luggage <= 2) {
		return luggage_total = 0;
	}
	else if (num_luggage > 2) {
		return luggage_total = (num_luggage - 2) * ADDITIONAL_LUGGAGE_COST;
	}
	else {
		std::cout << "Sorry you did not enter a valid number for carry-on luggage" << std::endl;
		return luggage_total = 0;
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
		return SeatingClass::ECONOMY;
	}
}


void Estimate::calcCost() {
	std::string convert_time;
	int final_seat_total;
	int final_luggage_total;

	// Day converter
	unsigned int hour;
	std::cout << "What time of day would you like to depart? Ex: 1 - 24 " << std::endl;
	std::cin >> hour;

	convert_time = convertHours(hour);


	// Seat Reserver
	unsigned int seats;
	std::cout << "How many seats would you like to reserve? Ex: 2" << std::endl;
	std::cin >> seats;

	SeatingClass s_tier;
	std::string str_s_tier;
	std::cout << "What class seating would you like? |Options: ECONOMY, PREMIUM_ECONOMY, BUSINESS, FIRST_CLASS|" << std::endl;
	std::cin >> str_s_tier;

	s_tier = strToEnumSeat(str_s_tier);
	final_seat_total = calcSeatTotal(seats, s_tier);

	// Luggage total logic
	unsigned int l_num_luggage;
	std::cout << "How many carry on luggage will you require? *** Additional fee: $35 for MORE THAN 2 carry-on ***" << std::endl;
	std::cin >> l_num_luggage;
	final_luggage_total = calcLuggageTotal(l_num_luggage);

	// Total all options for final total
	std::cout << "Expected time of departure " << convert_time << std::endl;
	std::cout << "You have reserved " << seats << " flight seats," << std::endl;
	std::cout << "You've selected " << str_s_tier  << " seating class," << std::endl;
	std::cout << "You have " << l_num_luggage << " luggage to bring on." << std::endl;
	std::cout << "Your total cost for the selected flight options: " << "$" << final_seat_total + final_luggage_total << std::endl;
}

Estimate::~Estimate() {
	std::cout << "Estimate object destroyed" << std::endl;
}
