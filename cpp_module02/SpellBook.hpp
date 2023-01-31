#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include "ASpell.hpp"
#include "ATarget.hpp"
#include <map>

class SpellBook
{
	private :
		SpellBook(SpellBook const &rhs);
		SpellBook &operator=(SpellBook const &rhs);
		std::map<std::string, ASpell *> container;
	public :
		SpellBook();
		~SpellBook();
		void 	learnSpell(ASpell *spell);
		void	forgetSpell(std::string const &name);
		ASpell *createSpell(std::string const &name);
};

#endif
