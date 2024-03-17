#include "Payment.h"
#include<iostream>
#include<windows.h>

/*
	Test all Payment Methods
*/


// Payment Constructors
Payment::Payment() {
	this->card_number = 0;
	this->expiration_month = 0;
	this->expiration_year = 0;
	this->ccv_number = 0;
}

Payment::Payment(unsigned long c_card_num, unsigned int c_exp_month, unsigned int c_card_year, unsigned int c_ccv_num) {
	this->card_number = c_card_num;
	this->expiration_month = c_exp_month;
	this->expiration_year = c_card_year;
	this->ccv_number = c_ccv_num;
}

// Payment Setters
void Payment::setCardNumber(unsigned long s_card_num) {
	this->card_number = s_card_num;
}

void Payment::setExpirationMonth(unsigned int s_card_month) {
	this->expiration_month = s_card_month;
}

void Payment::setExpirationYear(unsigned int s_card_year) {
	this->expiration_year = s_card_year;
}

void Payment::setCCVNumber(unsigned int s_ccv_num) {
	this->ccv_number = s_ccv_num;
}

// Payment Getters
int Payment::getCardNumber() const {
	return this->card_number;
}

int Payment::getExpirationMonth() const {
	return this->expiration_month;
}

int Payment::getExpirationYear() const {
	return this->expiration_year;
}

int Payment::getCcvNumber() const {
	return this->ccv_number;
}

// Utility
void Payment::processPayment() {
	unsigned long l_card_num;
	unsigned int l_card_mth;
	unsigned int l_card_yr;
	unsigned int l_ccv;

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

	// Simulate live payment process
	this->paymentAnimation();

	// Message Success of Payment transaction
	this->confirmationPaymentSuccessMsg();

	// Display payment information
	this->displayPaymentInformation();

}

void Payment::displayPaymentInformation() {
	std::cout << std::endl;
	std::cout << "Payment Details:" << std::endl;
	std::cout << "Card Number: " << this->getCardNumber() << std::endl;
	std::cout << "Card Expiration Month: " << this->getExpirationMonth() << std::endl;
	std::cout << "Card Expiration Year: " << this->getExpirationYear() << std::endl;
	std::cout << "Card CCV Number: " << this->getCcvNumber() << std::endl;
}

// Confimation Message
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



