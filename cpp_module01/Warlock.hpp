/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:07:36 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:43:20 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
# include <map>
# include "ASpell.hpp"
# include "ATarget.hpp"

class Warlock
{
	private :
		std::string name;
		std::string title;
		Warlock();
		Warlock(Warlock const &rhs);
		Warlock &operator=(Warlock const &rhs);
		std::map<std::string, ASpell *> arr;
	public :
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		// GETTERS :
		std::string const &getName() const;
		std::string const &getTitle() const;
		// SETTERS :
		void setTitle(std::string const &title);
		void introduce() const;

		// METHODS :
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string name);
		void launchSpell(std::string name, ATarget const &target);	
};

#endif
