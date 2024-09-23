#ifndef BRICKWALL_HPP
#define BRICKWALL_HPP

#include "ATarget.hpp"

class BrickWall : public ATarget
{
	public:
		BrickWall() : ATarget("Target Practice BrickWall") {}
		virtual ~BrickWall() {}
		
		virtual ATarget *clone() const;
};

#endif
