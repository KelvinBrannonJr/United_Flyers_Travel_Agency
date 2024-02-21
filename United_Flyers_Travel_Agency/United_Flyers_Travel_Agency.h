#ifndef UNITED_FLYERS_TRAVEL_AGENCY_H
#define UNITED_FLYERS_TRAVEL_AGENCY_H

// Variables
std::string first_name;
std::string last_name;
std::string flight_from;
std::string flight_to;

char user_choice;

bool isRunning = false;

// Main Function
bool quitUI();


// Feature Functionsvo
void planTrip();

// Utility healper functions
void displayMenu();
void menuSelection(char choice);

#endif