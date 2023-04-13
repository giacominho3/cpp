#include <string>
#include <iostream>
#include "contact.hpp"

class PhoneBook
{
	private:
	Contact	contacts[8];
	int		index;

	public:

	PhoneBook()
	{

	}

	~PhoneBook()
	{

	}

	std::string fill(std::string str)
	{
		int			diff;
		std::string	temp;

		diff = str.size() - 10;
		if (diff > 0)
		{
			temp = str.substr(0, 10);
			temp[9] = '.';
		}
		else
		{
			temp = str;
			int i = str.size();
			while (i < 10)
			{
				temp.insert(0, " ");
				i++;
			}
		}
		return (temp);
	}

	void printContacts(Contact *contacts)
	{
		int	i = 0;
		int	occ = 0;
		
		while (i < 8)
		{
			if (!(contacts[i].getFirstName().empty()))
				occ++;
			i++;
		}

		i = 0;
		std::cout << "FIRST NAME|" << " LAST NAME|" << "  NICKNAME|" << "PHONE NUMB|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		while (i < occ)
		{
			std::cout << fill(contacts[i].getFirstName()) << "|" << fill(contacts[i].getLastName()) << "|" << fill(contacts[i].getNickname()) << "|" << fill(contacts[i].getPhoneNumber()) << "|" << std::endl;
			i++;
		}
		std::cout << std::endl;
	}

	void add()
	{
		if (this->index % 8 == 0 && this->index != 0)
		{
			char		response;
			std::string	nl;

			std::cout << "You are about to override the oldest contact in this phonebook" << std::endl;
			std::cout << "Would you like to continue [y/n]" << std::endl;
			std::cin >> response;
			std::getline(std::cin, nl);
			if (response == 'n')
				return ;
			std::cout << std::endl;
		}
		std::string temp;
		std::cout << "Insert first name of new contact: " << std::endl;
		std::getline(std::cin, temp);
		this->contacts[index % 8].setFirstName(temp);
		std::cout << "Insert last name of new contact: " << std::endl;
		std::getline(std::cin, temp);
		this->contacts[index % 8].setLastName(temp);
		std::cout << "Insert nickname of new contact: " << std::endl;
		std::getline(std::cin,temp);
		this->contacts[index % 8].setNickname(temp);
		std::cout << "Insert phone number of new contact: " << std::endl;
		std::getline(std::cin, temp);
		this->contacts[index % 8].setPhoneNumber(temp);
		std::cout << "Insert darkest secret of new contact: " << std::endl;
		std::getline(std::cin, temp);
		this->contacts[index % 8].setDarkestSecret(temp);
		std::cout << std::endl;
		if (this->contacts[index % 8].getFirstName().empty() || this->contacts[index % 8].getLastName().empty() || this->contacts[index % 8].getNickname().empty() || this->contacts[index % 8].getPhoneNumber().empty() || this->contacts[index % 8].getDarkestSecret().empty())
		{
			std::cout << "Some of the fields of the contact were empty, contact was not created!!!" << std::endl;
			this->contacts[index % 8].setFirstName("");
			this->contacts[index % 8].setLastName("");
			this->contacts[index % 8].setNickname("");
			this->contacts[index % 8].setPhoneNumber("");
			this->contacts[index % 8].setDarkestSecret("");
		}
		else
			this->index++;
	}

	void search()
	{
		int			i;
		int			j = 0;
		int			occ = 0;
		std::string	nl;
	
		printContacts(this->contacts);
		std::cout << "Insert index of contact to search: " << std::endl;
		std::cin >> i;
		std::getline(std::cin, nl);
		std::cout << std::endl;
		while (j < 8)
		{
			if (!(this->contacts[j].getFirstName().empty()))
				occ++;
			j++;
		}
		if (i < 0 || (i > (occ - 1)))
			std::cout << "The index you inserted is not valid or out of range!!!" << std::endl;
		else
		{
			std::cout << "First name: " << this->contacts[i].getFirstName() << std::endl;
			std::cout << "Last name: " << this->contacts[i].getLastName() << std::endl;
			std::cout << "Nickname: " << this->contacts[i].getNickname() << std::endl;
			std::cout << "Phone number: " << this->contacts[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
			std::cout << std::endl;
		}
	}
};

int main()
{
	PhoneBook	*ph = new PhoneBook();
	std::string	response;

	std::cout << "Welcome to the phonebook!" << std::endl << std::endl;
	while (1)
	{
		std::cout << "What operation would you like to do? (ADD / SEARCH / EXIT)" << std::endl;
		std::getline(std::cin, response);
		std::cout << std::endl;
		if (!response.compare("ADD"))
			ph->add();
		else if (!response.compare("SEARCH"))
			ph->search();
		else if (!response.compare("EXIT"))
		{
			delete(ph);
			return (0);
		}
		else
			std::cout << "Operation not valid!" << std::endl;
	}
	return (0);
}