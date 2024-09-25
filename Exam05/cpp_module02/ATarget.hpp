#ifndef ATARET_HPP
#define ATARET_HPP

#include <iostream>

class ASpell;

class ATarget
{
	private:
		std::string _type;
		
	public:
		ATarget() {}
		ATarget(const std::string type) : _type(type) {} 
		ATarget(const ATarget &copy) : _type(copy._type)  {}
		ATarget &operator=(const ATarget &src)
		{
			this->_type = src._type;
			return (*this);
		}
		virtual ~ATarget() {}
		
		const std::string getType() const {return (this->_type);}
		
		virtual ATarget *clone() const = 0;
		
		void getHitBySpell(const ASpell &ASpell) const;
};

#include "ASpell.hpp"

#endif
