#ifndef WAR_HPP
#define WAR_HPP

#include <iostream>

class Warlock
{
	private: 
		std::string _name;
		std::string _title;
		Warlock();
		Warlock(const Warlock &copy);
		Warlock &operator=(const Warlock &src);
		
		
	public:
		Warlock (const std::string &name, const std::string &title);
		~Warlock();
		const std::string &getName() const;
		const std::string &getTitle() const;
		
		void setTitle(const std::string &Title);
		
		void introduce() const;
};

#endif
