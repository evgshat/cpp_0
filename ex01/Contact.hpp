#ifndef CONTACT_HPP
#define CONTACT_HPP


#include <string>
#include <iostream>

class Contact
{
	private:
		int			id;
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	number;
		std::string	secret;
	public:
		Contact();
		~Contact();
		const int&				GetId() const;
		const std::string&	GetFirstName() const;
		const std::string&	GetLastName() const;
		const std::string&	GetNickName() const;
		const std::string&	GetNumber() const;
		const std::string&	GetSecret() const;

		void				SetId(const int& id);
		void				SetFirstName(const std::string& FirstName);
		void				SetLastName(const std::string& LastName);
		void				SetNickName(const std::string& NickName);
		void				SetNumber(const std::string& Number);
		void				SetSecret(const std::string& Secret);
};

#endif
