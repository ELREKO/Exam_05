#include "Warlock.hpp"

Warlock::Warlock (const std::string &name, const std::string &title) : _name(name), _title(title)
{
	std::cout << this->_name << ": This looks like another boring day." << std::endl;

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
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" << std::endl;	
}

void Warlock::learnSpell (const ASpell *spell)
{
	this->_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell (const std::string spellName)
{
	this->_spellBook.forgetSpell(spellName);
}


void Warlock::launchSpell (const std::string spellName, const ATarget &Target)
{
	ASpell *Spell = this->_spellBook.createSpell(spellName);
	if (Spell)
		Spell->launch(Target);
}
