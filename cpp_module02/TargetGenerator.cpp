#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}

TargetGenerator::~TargetGenerator(){}

void	TargetGenerator::learnTargetType(ATarget *target)
{
	container.insert(std::pair<std::string, ATarget *>(target->getType(), target->clone()));
}

void	TargetGenerator::forgetTargetType(std::string const &type)
{
	container.erase(type);
}

ATarget *TargetGenerator::createTarget(std::string const &type)
{
	std::map<std::string, ATarget *>::iterator it = container.find(type);
	if (it != container.end())
		return (container[type]);
	return (NULL);
}
