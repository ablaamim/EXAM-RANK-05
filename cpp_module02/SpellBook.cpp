#include "SpellBook.hpp"

SpellBook::SpellBook(){}

SpellBook::~SpellBook(){}

void	SpellBook::learnSpell(ASpell *spell)
{
	container.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	SpellBook::forgetSpell(std::string const &name)
{
	container.erase(name);
}

ASpell *SpellBook::createSpell(std::string const &name)
{
	std::map<std::string, ASpell *>::iterator it = container.find(name);
	if (it != container.end())
		return container[name];
	return (NULL);
}
