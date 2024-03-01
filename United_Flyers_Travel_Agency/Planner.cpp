#include "Planner.h"
#include <iostream>


// Planner Constructor
Planner::Planner(std::string home, std::string destination) {
	coming_from = home;
	going_to = destination;
}


// Planner Setters
void Planner::setComingFrom(std::string s_home) {
	this->coming_from = s_home;
}

void Planner::setGoingTo(std::string s_dest) {
	this->going_to = s_dest;
}


