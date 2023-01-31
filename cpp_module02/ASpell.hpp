#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell
{
	protected :
		std::string name;
		std::string effects;
	public :
		// O-C FORM
		ASpell();
		ASpell(std::string const &name, std::string const &title);
		ASpell(ASpell const &rhs);
		ASpell &operator=(ASpell const &rhs);
		virtual ~ASpell();

		// GETTERS:
		std::string const &getName() const;
		std::string const &getEffects() const;

		// METHODS :
		void	launch(ATarget const &target) const;

		virtual ASpell *clone() const = 0;
};

#endif
