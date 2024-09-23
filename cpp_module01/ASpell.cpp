#include "ASpell.hpp"

void ASpell::launch (const ATarget &Target) const 
{
	Target.getHitBySpell(*this);
}
