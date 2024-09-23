#ifndef TARGETGENE_HPP
#define TARGETGENE_HPP

#include <iostream>
#include <vector>
#include "ATarget.hpp"



class TargetGenerator
{
	private: 
		std::vector<ATarget*> _targets;
		
		TargetGenerator(const TargetGenerator &copy);
		TargetGenerator &operator=(const TargetGenerator &src);
		
		
	public:
		TargetGenerator ();
		virtual ~TargetGenerator();

		void learnTargetType (const ATarget *target);
		void forgetTargetType (const std::string &targetType);
		ATarget *createTarget (const std::string &targetType);
};

#endif
