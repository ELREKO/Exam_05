#ifndef POLY_HPP
#define POLY_HPP

#include "ASpell.hpp"

class Polymorph : public ASpell
{
	public:
		Polymorph() ;
		virtual ~Polymorph() ;
		
		virtual ASpell *clone() const;
};


#endif
