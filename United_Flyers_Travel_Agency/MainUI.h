#pragma once
#include <string>

// Variables
std::string flight_from;
std::string flight_to;

char user_choice;

bool isRunning = false;

// Main Function
bool quitUI();


// Feature Functions
void planTrip();

// Utility healper functions
void displayMenu();
void menuSelection(char choice);
