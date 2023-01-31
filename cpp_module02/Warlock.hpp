#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include "ATarget.hpp"
#include "ASpell.hpp"
#include <map>
#include "SpellBook.hpp"
class Warlock
{
	private :
		std::string name;
		std::string title;
		Warlock();
		Warlock(Warlock const &rhs);
		Warlock &operator=(Warlock const &rhs);
		SpellBook book;
	public :
		// C-O form
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		// GETTERS :
		std::string const &getName() const;
		std::string const &getTitle() const;
		
		// SETTER :
		void setTitle(std::string const &title);

		// METHODS :
		void 	introduce() const;
		void	learnSpell(ASpell *spell);
		void	forgetSpell(std::string name);
		void	launchSpell(std::string name, ATarget const &target);
};

#endif
