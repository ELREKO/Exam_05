#include "SpellBook.hpp"

SpellBook::SpellBook () {}
SpellBook::~SpellBook()
{
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
	{
		delete (*it);	
	}
	this->_spells.clear();
}

void SpellBook::learnSpell (const ASpell *spell)
{	
	if (spell)
	{
		std::vector<ASpell*>::iterator ite = _spells.end();
		for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
		{
			if ((*it)->getName() == spell->getName())
			{
				return;
			}
		}
		this->_spells.push_back(spell->clone());
	}
}

void SpellBook::forgetSpell (const std::string &spellName)
{
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName)
		{
			delete (*it);
			it = this->_spells.erase(it);
		}
	}
}

ASpell *SpellBook::createSpell (const std::string &spellName)
{
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName)
		{
			return (*it);
		}
	}
	return (NULL);
}

