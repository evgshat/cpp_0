#include "PhoneBook.hpp"

int main()
{
	PhoneBook p;
	std::string	message;

	while (1)
	{
		std::cout << "Enter one of the available commands: ADD, SEARCH, EXIT: " << std::endl;
		std::getline(std::cin, message);
		if (message == "ADD")
			p.AddContact();
		else if (message == "SEARCH")
				p.SearchContact();
		else if (message == "EXIT")
			break ;
	}
	return 0;
}
