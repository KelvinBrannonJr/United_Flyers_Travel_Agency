#include "Payment.h"
#include<iostream>
#include<windows.h>


// Payment Constructors
Payment::Payment() {
	this->card_number = "None";
	this->expiration_month = "None";
	this->expiration_year = "None";
	this->ccv_number = "None";
}

Payment::Payment(std::string c_card_num, std::string c_exp_month, std::string c_card_year, std::string c_ccv_num) {
	this->card_number = c_card_num;
	this->expiration_month = c_exp_month;
	this->expiration_year = c_card_year;
	this->ccv_number = c_ccv_num;
}

// Payment Setters
void Payment::setCardNumber(std::string s_card_num) {
	this->card_number = s_card_num;
}

void Payment::setExpirationMonth(std::string s_card_month) {
	this->expiration_month = s_card_month;
}

void Payment::setExpirationYear(std::string s_card_year) {
	this->expiration_year = s_card_year;
}

void Payment::setCCVNumber(std::string s_ccv_num) {
	this->ccv_number = s_ccv_num;
}

// Payment Getters
std::string Payment::getCardNumber() const {
	return this->card_number;
}

std::string Payment::getExpirationMonth() const {
	return this->expiration_month;
}

std::string Payment::getExpirationYear() const {
	return this->expiration_year;
}

std::string Payment::getCcvNumber() const {
	return this->ccv_number;
}

// Payment Utility Methods
void Payment::processPayment() {
	std::string l_card_num;
	std::string l_card_mth;
	std::string l_card_yr;
	std::string l_ccv;

	std::cout << std::endl;
	std::cout << "Ok you would like to purchase the Booking, let's get your payment information." << std::endl;

	// Card Number
	std::cout << "Please enter ANY 16 digit card number, Ex: 1234567812345678 " << std::endl;
	std::cin.clear();
	std::cin >> l_card_num;
	this->setCardNumber(l_card_num);

	// Card Month
	std::cout << "Please enter ANY 2-digit card expiration month, Ex: 01 " << std::endl;
	std::cin.clear();
	std::cin >> l_card_mth;
	this->setExpirationMonth(l_card_mth);

	// Card Year
	std::cout << "Please enter ANY 2-digit card expiration year, Ex: 23 " << std::endl;
	std::cin.clear();
	std::cin >> l_card_yr;
	this->setExpirationYear(l_card_yr);

	// Card CCV
	std::cout << "Please enter ANY 3-digit card CCV Code, Ex: 123 " << std::endl;
	std::cin.clear();
	std::cin >> l_ccv;
	this->setCCVNumber(l_ccv);
}

void Payment::displayPaymentInformation() {
	std::cout << std::endl;
	std::cout << "Payment Details:" << std::endl;
	std::cout << "Card Number: " << this->getCardNumber() << std::endl;
	std::cout << "Card Expiration Month: " << this->getExpirationMonth() << std::endl;
	std::cout << "Card Expiration Year: " << this->getExpirationYear() << std::endl;
	std::cout << "Card CCV Number: " << this->getCcvNumber() << std::endl;
}

void Payment::confirmationPaymentSuccessMsg() {
	std::cout << std::endl;
	std::cout << "Payment Process Complete!!" << std::endl;
	std::cout << "Thank you, Please enjoy your trip!" << std::endl;
}

void Payment::paymentAnimation() {
	const int PERIOD_NUM = 5;
	char period = '.';

	for (int i = 0; i < PERIOD_NUM; ++i) {
		std::cout << period;
		Sleep(1000);
	}
	std::cout << std::endl;
}

// Payment Destructor
Payment::~Payment() {
	std::cout << "Payment object destroyed" << std::endl;
}



