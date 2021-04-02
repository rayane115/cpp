

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
public:
	Pony();
	~Pony();

	void			run(void);
	void			jump(void);
	void			setName(std::string str);

private:
	std::string		name;
};

#endif