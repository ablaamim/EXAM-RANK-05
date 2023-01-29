/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:26:57 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:40:43 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		ASpell();
		ASpell(std::string const &name, std::string const &effects);
		virtual ~ASpell();
		ASpell(ASpell const &rhs);
		ASpell &operator=(ASpell const &rhs);
		
		// GETTER :
		std::string const &getName() const;
		std::string const &getEffects() const;

		// ABSTRACT INTERFACE :
		virtual ASpell *clone() const = 0;

		// METHOD :
		void launch(ATarget const &target) const;
};

#endif
