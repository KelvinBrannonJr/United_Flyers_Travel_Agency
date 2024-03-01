#pragma once
#include <string>

class Planner {
	// Planner Constructor
	Planner(std::string home, std::string destination);

	// Private members
	private:
		std::string coming_from;
		std::string going_to;

	public:

		// Planner Setters
		void setComingFrom(std::string s_home);
		void setGoingTo(std::string s_dest);

		// Planner Getters
		std::string getComingFrom() const;
		std::string getGoingTo() const;

		// Planner Utility
		void printTrip();

		// Planner Destructor
		~Planner();




};