#include "TargetGenerator.hpp"		
		
TargetGenerator::TargetGenerator () {}
TargetGenerator::~TargetGenerator() 
{
	std::vector<ATarget*>::iterator ite = _targets.end();
	for (std::vector<ATarget*>::iterator it = _targets.begin(); it != ite; ++it)
	{
		delete (*it);	
	}
	this->_targets.clear();
}


void TargetGenerator::learnTargetType (ATarget *target)
{	
	if (target)
	{
		std::vector<ATarget*>::iterator ite = _targets.end();
		for (std::vector<ATarget*>::iterator it = _targets.begin(); it != ite; ++it)
		{
			if ((*it)->getType() == target->getType())
			{
				return;
			}	
		}
		this->_targets.push_back(target->clone());
	}
}

void TargetGenerator::forgetTargetType (const std::string &targetType)
{	
	std::vector<ATarget*>::iterator ite = _targets.end();
	for (std::vector<ATarget*>::iterator it = _targets.begin(); it != ite; ++it)
	{
		if ((*it)->getType() == targetType)
		{
			delete (*it);	
			it = this->_targets.erase(it);
		}
	}
}


ATarget *TargetGenerator::createTarget(std::string const &TargetName) {
	std::vector<ATarget*>::iterator ite = this->_targets.end();
	for (std::vector<ATarget*>::iterator it = this->_targets.begin(); it != ite; ++it) {
		if ((*it)->getType() == TargetName) {
			return (*it);
		}
	}
	return (NULL);
}
