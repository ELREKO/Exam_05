#ifndef WAR_HPP
#define WAR_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock
{
	private: 
		std::string _name;
		std::string _title;
		std::vector<ASpell*> _spells;
		
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
		
		void learnSpell (const ASpell *spell);
		void forgetSpell (const std::string spellName);
		void launchSpell (const std::string spellName, const ATarget &Target);
};

#endif
