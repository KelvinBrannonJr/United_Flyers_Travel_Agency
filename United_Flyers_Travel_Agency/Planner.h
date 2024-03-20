#pragma once
#include <string>


class Planner {

	private:
		// Private members
		std::string coming_from_city;
		std::string coming_from_state;
		std::string going_to_city;
		std::string going_to_state;

	public:
		// Planner Constructors
		Planner();
		Planner(std::string cf_city, std::string cf_state, std::string gt_city, std::string gt_state);

		// Planner Setters
		void setComingFromCity(std::string s_cf_city);
		void setComingFromState(std::string s_cf_state);
		void setGoingToCity(std::string s_gt_city);
		void setGoingToState(std::string s_gt_state);

		// Planner Getters
		std::string getComingFromCity() const;
		std::string getComingFromState() const;
		std::string getGoingToCity() const;
		std::string getGoingToState() const;

		// Planner Utility
		void printTrip();
		void enterTripDetails();

		// Planner Destructor
		~Planner();




};