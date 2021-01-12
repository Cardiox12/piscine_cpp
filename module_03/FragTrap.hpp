/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:42:26 by bbellavi          #+#    #+#             */
/*   Updated: 2021/01/12 20:23:43 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

# define FRAG_TRAP_INITIALIZER "default";

class FragTrap
{
private:
	int				_hit_points = 100;
	int				_max_hit_points = 100;
	int				_energy_points = 100;
	int				_max_energy_points = 100;
	unsigned int	_level = 1;
	std::string		_name;
	int				_melee_attack_damage = 30;
	int				_ranged_attack_damage = 20;
	int				_armor_attack_reduction = 5;

	// int		getRandomIndex(unsigned int max) const;
	void		printAttackMessage(std::string name, std::string target, std::string type, unsigned int damage) const;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &cls);
	~FragTrap();

	FragTrap	&operator=(const FragTrap &other);

	void		rangedAttack(std::string const &target) const;
	void		meleeAttack(std::string const &target) const;
	void		takeDamage(unsigned int amount);
	void		beRepaired(unsigned int amount);
};
