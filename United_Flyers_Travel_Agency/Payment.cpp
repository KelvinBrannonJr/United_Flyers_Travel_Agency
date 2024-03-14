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