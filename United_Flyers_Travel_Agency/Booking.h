#pragma once
#include<string>

/*
	1: Allow customers to book a flight, can inherit logic from EstimateCost for ease of implementation.
	2: Provide payment gateway, possibly from an external helper class.
	3: Finalized payment details
*/

class Booking {
	public:
		// Booking Constructors
		Booking();
		Booking(unsigned int c_flight_num, unsigned int c_customer_num, std::string c_airport_name, std::string c_gate_id);

	private:
		// Booking Private Members
		unsigned int flight_number;
		unsigned int customer_number;
		std::string airport_name;
		std::string gate_id;

	public:
		// Booking Setters
		void setFlightNumber(unsigned int s_flight_num);
		void setCustomerNumber(unsigned int s_customer_num);
		void setAirportName(std::string s_airport_name);
		void setGateId(std::string s_gate_id);

		// Booking Getters
		int getFlightNumber() const;
		int getCustomerNumber() const;
		std::string getAirportName() const;
		std::string getGateId() const;
		
		// Destructor
		~Booking();
		
};
