#include <string>
#include "contact.hpp"

Contact::Contact()
{

}

Contact::~Contact()
{

}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

void Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

void Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

void Contact::setNickname(std::string n)
{
	this->nickname = n;
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

void Contact::setPhoneNumber(std::string pn)
{
	this->phoneNumber = pn;
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}

void Contact::setDarkestSecret(std::string ds)
{
	this->darkestSecret = ds;
}