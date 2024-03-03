#pragma once

// FEATURES:
/*

1: Ask user what time of day in hour incements 1 - 24hr.
2: Ask user how many seats are needed? (Fixed rate per seat).
3: Ask user which class they would like to fly (Fixed rate per class).
4: 2 Free carry on lugguage, (additional added cost per additional lugguage).
5: Tally up all cost and output total price for trip.

*/

class Estimate {
	public:
		// Constant memebers
		const int RATE_PER_SEAT = 75;
		const int ECONOMY_SEAT_MODIFIER = 1;
		const int PREMIUM_ECONOMY_SEAT_MODIFIER = 2;
		const int BUSINESS_SEAT_MODIFIER = 3;
		const int FIRST_CLASS_SEAT_MODIFIER = 4;

};
