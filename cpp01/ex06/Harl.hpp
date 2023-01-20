#ifndef HARL_H
# define HARL_H
# include <iostream>
# include <iomanip>
# include <cstring>
# include <fstream>

class Harl
{
	private:

	void debug(void);
	void info(void);
	void warning(void);
	void error(void);

	public:

	Harl ();
	~Harl ();
	void complain(std::string level);
};

#endif