#pragma once
#include "FlightSeatClass.h"

class Estimate {

	private:
		// Estimate Member Variables
		int time_hours;
		int num_of_seats;
		int num_of_luggage;
		SeatingClass seat_class;

	public:
		// Estimate Constructor
		Estimate();

		// Estimate Constant members
		const int RATE_PER_SEAT = 75;
		const int ECONOMY_SEAT_MODIFIER = 1;
		const int PREMIUM_ECONOMY_SEAT_MODIFIER = 2;
		const int BUSINESS_SEAT_MODIFIER = 3;
		const int FIRST_CLASS_SEAT_MODIFIER = 4;
		const int ADDITIONAL_LUGGAGE_COST = 35;


		// Estimate Setters
		void setHours(int s_hour);
		void setNumOfSeats(int s_num_seats);
		void setNumOfLuggage(int s_num_luggage);
		void setSeatClass(SeatingClass e_seat_class);

		// Estimate Getters
		int getHours() const;
		int getNumOfSeats() const;
		int getNumOfLuggage() const;
		SeatingClass getSeatClass() const;

		// Estimate Destructor
		~Estimate();

};
