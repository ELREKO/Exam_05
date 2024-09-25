#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell
{
	private:
		std::string _name;
		std::string _effects;
		
	public:
		ASpell() {}
		ASpell(const std::string name, const std::string effects) : _name(name), _effects(effects) {} 
		ASpell(const ASpell &copy) : _name(copy._name) , _effects(copy._effects) {}
		ASpell &operator=(const ASpell &src)
		{
			this->_name = src._name;
			this->_effects = src._effects;
			return (*this);
		}
		virtual ~ASpell() {}
		
		const std::string getName() const {return (this->_name);}
		const std::string getEffects() const {return (this->_effects);}
		
		virtual ASpell *clone() const = 0;
		
		void launch (const ATarget &Target) const;
};

#include "ATarget.hpp"

#endif
