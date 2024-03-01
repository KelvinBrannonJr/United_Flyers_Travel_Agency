#pragma once
#include <string>

class Planner {

	// Private members
	private:
		std::string coming_from;
		std::string going_to;

	public:

		// Setters
		std::string setComingFrom(std::string home);
		std::string setGoingTo(std::string destination);

		// Getters
		void getComingFrom() const;
		void getGoingTo() const;

		// Utility
		void printTrip();




};