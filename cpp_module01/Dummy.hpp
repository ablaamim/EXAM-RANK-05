/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:04:12 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:39:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class ATarget;

class Dummy : public ATarget
{
	public :
		Dummy();
		~Dummy();
		virtual ATarget *clone() const;
};

#endif
