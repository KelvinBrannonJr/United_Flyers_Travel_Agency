#pragma once
#include<string>


class Booking {
	public:
		// Booking Constructors
		Booking();
		Booking(unsigned int c_flight_num, unsigned int c_customer_num, std::string c_airline_name, std::string c_gate_id);

	private:
		// Booking Private Members
		unsigned int flight_number;
		unsigned int customer_number;
		std::string airline_name;
		std::string gate_id;

	public:
		// Booking Setters
		void setFlightNumber(unsigned int s_flight_num);
		void setCustomerNumber(unsigned int s_customer_num);
		void setAirlineName(std::string s_airline_name);
		void setGateId(std::string s_gate_id);

		// Booking Getters
		int getFlightNumber() const;
		int getCustomerNumber() const;
		std::string getAirlineName() const;
		std::string getGateId() const;

		// Utility
		int generate_flight_number();
		int generate_customer_number();
		void process_booking();
		
		// Destructor
		~Booking();
		
};
