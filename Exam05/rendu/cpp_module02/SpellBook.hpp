#ifndef SPELL_HPP
#define SPELL_HPP

#include <iostream>
#include <vector>
#include "ASpell.hpp"



class SpellBook
{
	private: 
		std::vector<ASpell*> _spells;
		
		SpellBook(const SpellBook &copy);
		SpellBook &operator=(const SpellBook &src);
		
	public:
		SpellBook ();
		virtual ~SpellBook();

		void learnSpell (const ASpell *spell);
		void forgetSpell (const std::string &spellName);
		ASpell *createSpell (const std::string &spellName);
};

#endif
