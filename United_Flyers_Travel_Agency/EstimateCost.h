#pragma once
#include "FlightSeatClass.h"

class Estimate {

	private:
		// Estimate Member Variables
		unsigned int time_hours;
		unsigned int num_of_seats;
		unsigned int num_of_luggage;
		SeatingClass seat_class;

	public:
		// Estimate Constructor
		Estimate();
		Estimate(unsigned int c_num_hours, unsigned int c_num_seats, unsigned int c_num_luggauge, SeatingClass c_seat_class);

		// Estimate Constant members
		const int RATE_PER_SEAT = 75;
		const int ECONOMY_SEAT_MODIFIER = 1;
		const int PREMIUM_ECONOMY_SEAT_MODIFIER = 2;
		const int BUSINESS_SEAT_MODIFIER = 3;
		const int FIRST_CLASS_SEAT_MODIFIER = 4;
		const int ADDITIONAL_LUGGAGE_COST = 35;


		// Estimate Setters
		void setHours(unsigned int s_hour);
		void setNumOfSeats(unsigned int s_num_seats);
		void setNumOfLuggage(unsigned int s_num_luggage);
		void setSeatClass(SeatingClass e_seat_class);

		// Estimate Getters
		int getHours() const;
		int getNumOfSeats() const;
		int getNumOfLuggage() const;
		SeatingClass getSeatClass() const;

		// Utility
		std::string convertHours(unsigned int hrs);
		int calcSeatTotal(unsigned int num_seats, SeatingClass seat_tier);
		int calcLuggageTotal(unsigned int num_luggage);
		int calcCost();
		SeatingClass strToEnumSeat(std::string str_tier);


		// Estimate Destructor
		~Estimate();

};
