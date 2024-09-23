#ifndef POLY_HPP
#define POLY_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph() : ASpell("Polymorph", "turned into a critter") {}
		virtual ~Polymorph() {}
		
		virtual ASpell *clone() const;
};


#endif
