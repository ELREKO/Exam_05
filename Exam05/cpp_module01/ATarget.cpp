#include "ATarget.hpp"

void ATarget::getHitBySpell(const ASpell &ASpell) const
{
	std::cout << this->_type << " has been " << ASpell.getEffects() << "!" << std::endl;  
}
