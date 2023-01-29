/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 15:02:15 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:47:35 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh()
{
	this->name = "Fwoosh";
	this->effects = "fwooshed";
}

Fwoosh::~Fwoosh()
{
}

Fwoosh *Fwoosh::clone() const
{
	return (new Fwoosh());
}
