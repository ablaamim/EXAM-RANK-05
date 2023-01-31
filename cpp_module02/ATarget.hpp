#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private :
		std::string type;
	public :
		ATarget();
		ATarget(std::string const &type);
		ATarget(ATarget const &rhs);
		virtual ~ATarget();
		ATarget &operator=(ATarget const &rhs);

		// GETTERS :
		std::string const &getType() const;

		// METHODS :
		
		void getHitBySpell(ASpell const &spell) const;

		virtual ATarget *clone() const = 0;
};

#endif
