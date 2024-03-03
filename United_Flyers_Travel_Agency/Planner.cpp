#include "Planner.h"
#include <iostream>

// Planner Constructor
Planner::Planner() {

}

Planner::Planner(std::string cf_city, std::string cf_state, std::string gt_city, std::string gt_state) {
	this->coming_from_city = cf_city;
	this->coming_from_state = cf_state;
	this->going_to_city = gt_city;
	this->going_to_state = gt_state;
}


// Planner Setters
void Planner::setComingFromCity(std::string s_cf_city) {
	this->coming_from_city = s_cf_city;
}

void Planner::setComingFromState(std::string s_cf_state) {
	this->coming_from_state = s_cf_state;
}

void Planner::setGoingToCity(std::string s_gt_city) {
	this->going_to_city = s_gt_city;
}

void Planner::setGoingToState(std::string s_gt_state) {
	this->going_to_state = s_gt_state;
}

// Planner Getters
std::string Planner::getComingFromCity() const {
	return this->coming_from_city;
}

std::string Planner::getComingFromState() const {
	return this->coming_from_state;
}

std::string Planner::getGoingToCity() const {
	return this->going_to_city;
}

std::string Planner::getGoingToState() const {
	return this->going_to_state;
}

// Planner Utility
void Planner::printTrip() {
	std::cout << std::endl;
	std::cout << "Printing Planner Details" << std::endl;
	std::cout << std::endl;

	std::cout << "Leaving from: " << this->getComingFromCity() << ", " << this->getComingFromState() 
			<< " \tArriving to: " << this->getGoingToCity() << ", " << this->getGoingToState() 
	<< std::endl;
}

// Destructor
Planner::~Planner() {
	std::cout << "Planner destructor called" << std::endl;
}

