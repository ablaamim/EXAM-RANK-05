/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:37:38 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:42:14 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include "ASpell.hpp"

class ASpell;

class ATarget
{
	private :
		std::string type;
	public :
		// C-O FORM
		ATarget();
		ATarget(std::string const &type);
		virtual ~ATarget();
		ATarget(ATarget const &rhs);
		ATarget &operator=(ATarget const &rhs);

		// GETTER :
		std::string const &getType() const;

		// CONCRETE INTERFACE :
		virtual ATarget *clone() const = 0;

		void	getHitBySpell(ASpell const &spell) const;
};

#endif
