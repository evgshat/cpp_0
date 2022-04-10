#include "Contact.hpp"

Contact::Contact()
{}

Contact::~Contact()
{}

const int&	Contact::GetId() const
{
	return this->id;
}

const std::string& Contact::GetFirstName() const
{
	return this->firstname;
}

const std::string& Contact::GetLastName() const
{
	return this->lastname;
}

const std::string& Contact::GetNickName() const
{
	return this->nickname;
}

const std::string& Contact::GetNumber() const
{
	return this->number;
}

const std::string& Contact::GetSecret() const
{
	return this->secret;
}

void	Contact::SetId(const int& Id)
{
	this->id = Id;
}

void	Contact::SetFirstName(const std::string& FirstName)
{
	this->firstname = FirstName;
}

void	Contact::SetLastName(const std::string& LastName)
{
	this->lastname = LastName;
}

void	Contact::SetNickName(const std::string& NickName)
{
	this->nickname = NickName;
}

void	Contact::SetNumber(const std::string& Number)
{
	this->number = Number;
}

void	Contact::SetSecret(const std::string& Secret)
{
	this->secret = Secret;
}

