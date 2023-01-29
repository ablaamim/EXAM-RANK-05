/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:38:01 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:42:36 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(std::string const &type)
{
	this->type = type;
}

ATarget::~ATarget(){}

ATarget::ATarget(ATarget const &rhs)
{
	*this = rhs;
}

ATarget &ATarget::operator=(ATarget const &rhs)
{
	this->type = rhs.type;
	return *this;
}

std::string const &ATarget::getType() const
{
	return this->type;
}

void	ATarget::getHitBySpell(ASpell const &spell) const
{
	std::cout << this->type << " has been " << spell.getEffects() << "!" << std::endl;
}
