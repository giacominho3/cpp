#include <string>

class Contact
{
	private:

	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	public:

	Contact();
	~Contact();

	std::string getFirstName();
	void setFirstName(std::string fn);

	std::string getLastName();
	void setLastName(std::string ln);

	std::string getNickname();
	void setNickname(std::string n);

	std::string getPhoneNumber();
	void setPhoneNumber(std::string pn);

	std::string getDarkestSecret();
	void setDarkestSecret(std::string ds);
};