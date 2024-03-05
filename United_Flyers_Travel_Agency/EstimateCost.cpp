// FEATURES:
/*

1: Ask user what time of day in hour incements 1 - 24hr.
2: Ask user how many seats are needed? (Fixed rate per seat).
3: Ask user which class they would like to fly (Fixed rate per class).
4: 2 Free carry on luggage, (additional added cost per additional luggage).
5: Tally up all cost and output total price for trip.

*/

#include "EstimateCost.h"

// Constructor
Estimate::Estimate() {

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
