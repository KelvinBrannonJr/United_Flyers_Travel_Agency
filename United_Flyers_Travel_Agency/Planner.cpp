#include "Planner.h"
#include <iostream>



// Planner Constructor
Planner::Planner(std::string home, std::string destination) {
	this->coming_from = home;
	this->going_to = destination;
}


// Planner Setters
void Planner::setComingFrom(std::string s_home) {
	this->coming_from = s_home;
}

void Planner::setGoingTo(std::string s_dest) {
	this->going_to = s_dest;
}


// Planner Getters
std::string Planner::getComingFrom() const {
	return this->coming_from;
}

std::string Planner::getGoingTo() const {
	return this->going_to;
}

// Destructor
Planner::~Planner() {
	std::cout << "Planner destructor called" << std::endl;
}


