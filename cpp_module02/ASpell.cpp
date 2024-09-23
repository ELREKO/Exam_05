#include "ASpell.hpp"

void ASpell::launch (const ATarget &Target) const 
{
	std::cout << "test 2" << Target.getType() << "\n" ;
	Target.getHitBySpell(*this);
}
