#ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	contacts[8];
		int		num_contact;
	public:
		PhoneBook();
		~PhoneBook();
		void	AddContact();
		void	SearchContact();
		int		NormId();
};

#endif

