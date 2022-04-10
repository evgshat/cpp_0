#include "PhoneBook.hpp"

void	PhoneBook::SearchContact()
{
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  index   |first name|last name | nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;

	for(int i = 0; i < 8; i++)
	{
		if (this->contacts[i].GetFirstName().empty())
			break;
		std::cout << "|" << std::setw(10) << i + 1;
		if (this->contacts[i].GetFirstName().length() > 10)
			std::cout << "|" << std::setw(10) << this->contacts[i].GetFirstName().substr(0, 9) + '.';
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].GetFirstName();
		if (this->contacts[i].GetLastName().length() > 10)
			std::cout << "|" << std::setw(10) << this->contacts[i].GetLastName().substr(0, 9) + '.';
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].GetLastName();
		if (this->contacts[i].GetNickName().length() > 10)
			std::cout << "|" << std::setw(10) << this->contacts[i].GetNickName().substr(0, 9) + '.' << "|" << std::endl;
		else
			std::cout << "|" << std::setw(10) << this->contacts[i].GetNickName() << "|" << std::endl;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "Enter contact`s id: ";
	int id;
	std::string str_id;
	std::getline(std::cin, str_id);
	id = atoi(str_id.c_str());
	if (id <= 0 || id >= this->num_contact)
	{
		std::cout << "Wrong id!\n";
		return ;
	}
	id--;
	std::cout << "Firstname: " << this->contacts[id].GetFirstName() << std::endl;
	std::cout << "Lastname: " << this->contacts[id].GetLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[id].GetNickName() << std::endl;
	std::cout << "Number: " << this->contacts[id].GetNumber() << std::endl;
	std::cout << "Secret: " << this->contacts[id].GetSecret() << std::endl;
}

void	PhoneBook::AddContact()
{
	static int		i;
	std::string		new_field;
	std::cout << "Firstname: ";
	std::getline(std::cin, new_field);
	this->contacts[i].SetFirstName(new_field);
	std::cout << "Lastname: ";
	std::getline(std::cin, new_field);
	this->contacts[i].SetLastName(new_field);
	std::cout << "Nickname: ";
	std::getline(std::cin, new_field);
	this->contacts[i].SetNickName(new_field);
	std::cout << "Number: ";
	std::getline(std::cin, new_field);
	this->contacts[i].SetNumber(new_field);
	std::cout << "Secret: ";
	std::getline(std::cin, new_field);
	this->contacts[i].SetSecret(new_field);
	if (i == 7)
		i = 0;
	else
		i++;
	this->num_contact = i;
}

PhoneBook::PhoneBook(): num_contact(0)
{

}

PhoneBook::~PhoneBook()
{

}
