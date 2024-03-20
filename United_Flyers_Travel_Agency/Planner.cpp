#include "Planner.h"
#include <iostream>


// Planner Constructor
Planner::Planner() {
	this->coming_from_city = "None";
	this->coming_from_state = "None";
	this->going_to_city = "None";
	this->going_to_state = "None";
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
	std::cout << "Leaving from: " << this->getComingFromCity() << ", " << this->getComingFromState() << std::endl;
	std::cout << "Arriving to: " << this->getGoingToCity() << ", " << this->getGoingToState() << std::endl;
}

/*
	BUG: getlines() is storing trip details in serparate lines making printTrip() format wrongly.
		Maybe rework getting user trip details.
*/

void Planner::enterTripDetails() {
	std::string leaving_city;
	std::string leaving_state;
	std::string arriving_city;
	std::string arriving_state;

	std::cout << "What city are you flying from? Ex: New York City " << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, leaving_city);
	this->setComingFromCity(leaving_city);


	std::cout << "Ok, in what state are you leaving from? Ex: NY " << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, leaving_state);
	this->setComingFromState(leaving_state);

	std::cout << "What is the city of your destination? Ex: Cleveland " << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, arriving_city);
	this->setGoingToCity(arriving_city);


	std::cout << "Ok, what is the state of your destination? Ex: OH " << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, arriving_state);
	this->setGoingToState(arriving_state);
}

// Destructor
Planner::~Planner() {
	std::cout << "Planner destructor called" << std::endl;
}


