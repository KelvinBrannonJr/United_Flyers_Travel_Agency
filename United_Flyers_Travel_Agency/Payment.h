#pragma once

class Payment{
	private:
		// Payment Private Members
		unsigned int card_number;
		unsigned int expiration_month;
		unsigned int expiration_year;
		unsigned int ccv_number;

	public:
		// Constructors
		Payment();
		Payment(unsigned int c_card_num, unsigned int c_exp_month, unsigned int c_card_year, unsigned int c_ccv_num);

		// Constants
		const int CARD_NUM_LENGTH = 16;
		const int EXPIRATION_NUM_LENGTH = 2;
		const int CCV_NUM_LENGTH = 3;

		// Payment Setters
		void setCardNumber(unsigned int s_card_num);
		void setExpirationMonth(unsigned int s_card_month);
		void setExpirationYear(unsigned int s_card_year);
		void setCCVNumber(unsigned int s_ccv_num);

		// Payment Getters
		int getCardNumber() const;
		int getExpirationMonth() const;
		int getExpirationYear() const;
		int getCcvNumber() const;

		// Payment Destructor
		~Payment();

};
