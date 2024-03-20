#pragma once
#include <string>


// Class Main Members
std::string flight_from;
std::string flight_to;

char user_choice;

bool isRunning = false;

// Class Main Function Method
bool quitUI();


// Feature Functions
void planTrip();

// Class Main Utility healper functions
void displayMenu();
void menuSelection(char choice);
