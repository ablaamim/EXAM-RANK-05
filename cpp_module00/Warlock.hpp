/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 13:25:09 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/28 13:49:21 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>

class Warlock
{
	private :
		std::string name;
		std::string title;
		Warlock();
		Warlock(Warlock const &rhs);
		Warlock &operator=(Warlock const &rhs);
	public :
		Warlock(std::string const &name, std::string const &title);
		~Warlock();

		std::string const &getName() const;
		std::string const &getTitle() const;

		void setTitle(std::string const &title);
		void introduce() const;
};

# endif
