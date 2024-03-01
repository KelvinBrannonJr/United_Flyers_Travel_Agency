#pragma once
#include <string>

class Planner {
	// Constructor
	Planner(std::string home, std::string destination);

	// Private members
	private:
		std::string coming_from;
		std::string going_to;

	public:

		// Setters
		std::string setComingFrom(std::string);
		std::string setGoingTo(std::string);

		// Getters
		void getComingFrom() const;
		void getGoingTo() const;

		// Utility
		void printTrip();

		// Destructor
		~Planner();




};