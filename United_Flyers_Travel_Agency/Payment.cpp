#include "Payment.h"

// Payment Constructors
Payment::Payment() {
	this->card_number = 0000000000000000;
	this->expiration_month = 01;
	this->expiration_year = 23;
	this->ccv_number = 000;
}

Payment::Payment(unsigned int c_card_num, unsigned int c_exp_month, unsigned int c_card_year, unsigned int c_ccv_num) {
	this->card_number = c_card_num;
	this->expiration_month = c_exp_month;
	this->expiration_year = c_card_year;
	this->ccv_number = c_ccv_num;
}

// Payment Setters
void Payment::setCardNumber(unsigned int s_card_num) {
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


