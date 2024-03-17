#pragma once
#include "AirlineNames.h"
#include<string>


class Booking {
	public:
		// Booking Constructors
		Booking();
		Booking(unsigned int c_flight_num, unsigned int c_customer_num, Airlines c_airline_name, std::string c_gate_id);

	private:
		// Booking Private Members
		unsigned int flight_number;
		unsigned int customer_number;
		Airlines airline_name;
		std::string gate_id;

	public:
		// Booking Setters
		void setFlightNumber(unsigned int s_flight_num);
		void setCustomerNumber(unsigned int s_customer_num);
		void setAirlineName(Airlines s_airline_name);
		void setGateId(std::string s_gate_id);

		// Booking Getters
		int getFlightNumber() const;
		int getCustomerNumber() const;
		Airlines getAirlineName() const;
		std::string getGateId() const;

		// Utility
		int generateFlightNumber();
		int generateCustomerNumber();
		Airlines generateAirline();
		std::string airlineEnumToString(Airlines e_al);
		std::string generateGateId();
		void processBooking();
		void confirmBookingPurchase();
		
		// Destructor
		~Booking();
		
};
