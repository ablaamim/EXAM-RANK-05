#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include "ATarget.hpp"
#include <map>

class TargetGenerator
{
	private :
		TargetGenerator(TargetGenerator const &rhs);
		TargetGenerator &operator=(TargetGenerator const &rhs);
		std::map<std::string, ATarget *> container;
	public :
		TargetGenerator();
		~TargetGenerator();

		void learnTargetType(ATarget *target);
		void forgetTargetType(std::string const &type);
		ATarget *createTarget(std::string const &type);

};

#endif
