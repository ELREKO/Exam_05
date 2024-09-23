#include "Warlock.hpp"

Warlock::Warlock (const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
	{
		delete (*it);	
	}
	this->_spells.clear();
}

Warlock::~Warlock()
{
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const
{
	return (this->_name);
}

const std::string &Warlock::getTitle() const
{
	return (this->_title);
}
		
void Warlock::setTitle(const std::string &Title)
{
	this->_title = Title;
}
		
void Warlock::introduce() const
{
	std::cout << this->_name << ": I am" << this->_name << ", " << this->_title << "!" << std::endl;	
}

void Warlock::learnSpell (const ASpell *spell)
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

void Warlock::forgetSpell (const std::string spellName)
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


void Warlock::launchSpell (const std::string spellName, const ATarget &Target)
{
	std::vector<ASpell*>::iterator ite = _spells.end();
	for (std::vector<ASpell*>::iterator it = _spells.begin(); it != ite; ++it)
	{
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(Target);
			return;
		}
	}	
}
