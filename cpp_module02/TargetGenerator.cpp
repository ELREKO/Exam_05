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


void TargetGenerator::learnTargetType (const ATarget *target)
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


ATarget *TargetGenerator::createTarget (const std::string &targetType)
{
	std::vector<ATarget*>::iterator ite = _targets.end();
	for (std::vector<ATarget*>::iterator it = _targets.begin(); it != ite; ++it)
	{
		if ((*it)->getType() == targetType)
		{
			return (*it);
		}
	}
	return (NULL);
}
