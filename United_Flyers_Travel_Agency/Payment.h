#pragma once
#include<string>

class Payment{
	private:
		// Payment Private Members
		std::string card_number;
		std::string expiration_month;
		std::string expiration_year;
		std::string ccv_number;

	public:
		// Constructors
		Payment();
		Payment(std::string c_card_num, std::string c_exp_month, std::string c_card_year, std::string c_ccv_num);

		// Constants
		const int CARD_NUM_LENGTH = 16;
		const int EXPIRATION_NUM_LENGTH = 2;
		const int CCV_NUM_LENGTH = 3;

		// Payment Setters
		void setCardNumber(std::string s_card_num);
		void setExpirationMonth(std::string s_card_month);
		void setExpirationYear(std::string s_card_year);
		void setCCVNumber(std::string s_ccv_num);

		// Payment Getters
		std::string getCardNumber() const;
		std::string getExpirationMonth() const;
		std::string getExpirationYear() const;
		std::string getCcvNumber() const;

		// Utility
		void processPayment();
		void confirmationPaymentSuccessMsg();
		void displayPaymentInformation();
		void paymentAnimation();

		// Payment Destructor
		~Payment();

};
