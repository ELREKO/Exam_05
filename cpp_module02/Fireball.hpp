#ifndef FIRE_HPP
#define FIRE_HPP

#include "ASpell.hpp"

class Fireball : public ASpell
{
	public:
		Fireball() : ASpell("Fireball", "burnt to a crisp") {}
		virtual ~Fireball() {}
		
		virtual ASpell *clone() const;
};


#endif
