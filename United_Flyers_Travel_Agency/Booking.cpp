/*
	1: Allow customers to book a flight, can inherit logic from EstimateCost for ease of implementation.
	2: Provide payment gateway, possibly from an external helper class.
	3: Finalized payment details
*/

/*
	Use random to generate:
	flight number,
	customer number,
	gate id

	Make multiple utility helper functions to randomly generate each:
	- Two for loops, one increments characters
		the other to increment integers, and splices both back together.
*/

#include "Booking.h"
#include<iostream>
#include<cstdlib>
#include<time.h>

// Booking Constructors
Booking::Booking() {
	this->flight_number = 0;
	this->customer_number = 0;
	this->airport_name = "None";
	this->gate_id = "None";
}

Booking::Booking(unsigned int c_flight_num, unsigned int c_customer_num, std::string c_airport_name, std::string c_gate_id) {
	this->flight_number = c_flight_num;
	this->customer_number = c_customer_num;
	this->airport_name = c_airport_name;
	this->gate_id = c_gate_id;
}

// Booking Setters
void Booking::setFlightNumber(unsigned int s_flight_num) {
	this->flight_number = s_flight_num;
}

void Booking::setCustomerNumber(unsigned int s_customer_num) {
	this->customer_number = s_customer_num;
}

void Booking::setAirportName(std::string s_airport_name) {
	this->airport_name = s_airport_name;
}

void Booking::setGateId(std::string s_gate_id) {
	this->gate_id = s_gate_id;
}

// Booking Getters
int Booking::getFlightNumber() const {
	return this->flight_number;
}

int Booking::getCustomerNumber() const {
	return this->customer_number;
}

std::string Booking::getAirportName() const {
	return this->airport_name;
}

std::string Booking::getGateId() const {
	return this->gate_id;
}

// Utility
int Booking::generate_number() {
	int random_num;

	srand(time(0));

	for (int i = 0; i < 10; ++i) {
		random_num = 1000 + rand() % 9999;
	}
	
	return random_num;
}

// Destructors
Booking::~Booking() {
	std::cout << "Booking object destroyed" << std::endl;
}

