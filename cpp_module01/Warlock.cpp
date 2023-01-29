/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ablaamim <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/29 14:11:17 by ablaamim          #+#    #+#             */
/*   Updated: 2023/01/29 15:45:58 by ablaamim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock()
{}

Warlock::Warlock(std::string const &name, std::string const &title)
{
	this->name = name;
	this->title = title;
	std::cout << this->name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!" << std::endl;
}

std::string const &Warlock::getName() const
{
	return (this->name);
}

std::string const &Warlock::getTitle() const
{
	return this->title;
}

void	Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void	Warlock::introduce() const
{
	std::cout << this->name << ": I am " << this->name << ", " << this->title << "!" << std::endl;
}

void	Warlock::learnSpell(ASpell *spell)
{
	arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}

void	Warlock::forgetSpell(std::string name)
{
	arr.erase(name);
}

void	Warlock::launchSpell(std::string name, ATarget const &target)
{
	ASpell *spell = arr[name];
	if (spell)
		spell->launch(target);
}
