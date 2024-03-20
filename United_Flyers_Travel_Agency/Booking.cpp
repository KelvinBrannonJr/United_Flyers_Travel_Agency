#include "Booking.h"
#include "Payment.h"
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<map>


// Booking Constructors
Booking::Booking() {
	this->flight_number = 0;
	this->customer_number = 0;
	this->airline_name = AMERICAN;
	this->gate_id = "None";
}

Booking::Booking(unsigned int c_flight_num, unsigned int c_customer_num, Airlines c_airline_name, std::string c_gate_id) {
	this->flight_number = c_flight_num;
	this->customer_number = c_customer_num;
	this->airline_name = c_airline_name;
	this->gate_id = c_gate_id;
}

// Booking Setters
void Booking::setFlightNumber(unsigned int s_flight_num) {
	this->flight_number = s_flight_num;
}

void Booking::setCustomerNumber(unsigned int s_customer_num) {
	this->customer_number = s_customer_num;
}

void Booking::setAirlineName(Airlines s_airline_name) {
	this->airline_name = s_airline_name;
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

Airlines Booking::getAirlineName() const {
	return this->airline_name;
}

std::string Booking::getGateId() const {
	return this->gate_id;
}

// Booking Utility Methods
int Booking::generateFlightNumber() {
	int random_num;

	srand(unsigned(time(0)));
	for (int i = 0; i < 10; ++i) {
		random_num = 1000 + rand() % 9999;
	}	
	return random_num * random_num;
}

int Booking::generateCustomerNumber() {
	int random_num;

	random_num = 1000 + rand() % 9999;
	return random_num * random_num;
}

Airlines Booking::generateAirline() {
	Airlines e_airline;

	e_airline = static_cast<Airlines>(rand() % JETBLUE);
	return e_airline;
}

std::string Booking::airlineEnumToString(Airlines e_al) {

	// Enum map to Strings
	std::map<Airlines, std::string> mp_airline = {
		{ AMERICAN, "American Airlines" },
		{ DELTA, "Delta Airlines"},
		{ SOUTHWEST, "Southwest Airlines"},
		{ FRONTIER, "Frontier Airlines"},
		{ SPIRIT, "Spirit Airlines"},
		{ UNITED, "United Airlines"},
		{ JETBLUE, "Jetblue Airlines"}
	};
	return mp_airline.at(e_al);
}

std::string Booking::generateGateId() {
	char letter;
	int randm;
	int randm2;
	std::string num_to_string;
	std::string cipher;
	const int LIMIT = 25;

	for (int i = 0; i < LIMIT; ++i) {
		randm = rand() % 26;
		letter = 'A' + randm;
	}
	randm2 = rand() % 10;
	num_to_string = std::to_string(randm2);

	cipher = letter + num_to_string;
	return cipher;
}

void Booking::processBooking() {
	int flight_num;
	int customer_num;
	Airlines airline;
	std::string gateID;

	std::cout << std::endl;
	std::cout << "Processing booking information..." << std::endl;

	// Flight number
	flight_num = this->generateFlightNumber();
	std::cout << "Flight number: " << flight_num << std::endl;

	// Customer number
	customer_num = this->generateCustomerNumber();
	std::cout << "Customer number: " << customer_num << std::endl;

	// Airport Name
	airline = this->generateAirline();
	std::cout << "Airline Name: " << this->airlineEnumToString(airline) << std::endl;

	// Gate ID
	gateID = this->generateGateId();
	std::cout << "Gate ID: " << gateID << std::endl;
}

void Booking::confirmBookingPurchase() {
	char confirm_choice;
	std::cout << "Would you like to purchase this booking? Y/N" << std::endl;
	std::cin >> confirm_choice;

	switch (confirm_choice) {
		{
			case 'Y':
			case 'y':
				Payment pay; 
				pay.processPayment();
				pay.paymentAnimation();
				pay.confirmationPaymentSuccessMsg();
				pay.displayPaymentInformation();
				break;
		}

		{
			case 'N':
			case 'n':
				std::cout << "Ok, going back" << std::endl;
				break;
		}

		{
			default:
				std::cout << "Sorry that was an invalid input, Enter Y/N" << std::endl;
				break;
		}
	}
}

// Booking Destructors
Booking::~Booking() {
	std::cout << "Booking object destroyed" << std::endl;
}

