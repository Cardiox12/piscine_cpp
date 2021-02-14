/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbellavi <bbellavi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/12 15:42:26 by bbellavi          #+#    #+#             */
/*   Updated: 2021/02/03 22:56:28 by bbellavi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
# define FRAG_TRAP_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <vector>

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

	int			getRandomNumber(unsigned int max) const;
	std::string	getRandomQuote(unsigned int type) const;
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
	void		vaulthunter_dot_exe(std::string const &target) const;
};

# define FRAG_TRAP_INITIALIZER "default";

enum QuoteType {
	QTYPE_DEATH,
	QTYPE_BORN,
	QTYPE_VAULT_EXE_ACTIVATED,
	QTYPE_CRITIC_HIT,
	QTYPE_MELEE
};

static const std::string g_death_quotes[8] = {
	"NOOO!",
	"Poop.",
	"I'll get you next time!",
	"No fair! I wasn't ready.",
	"You got me!",
	"Argh arghargh death gurgle gurglegurgle urgh... death.",
	"Oh well.",
	"Crap happens."};

static const std::string g_born_quotes[2] = {
	"I'm getting alive Yeee-hay!",
	"Does this mean I can start dancing? Pleeeeeeaaaaase?"
};

static const std::string g_vaultexe_activated_quotes[8] = {
	"This time it'll be awesome, I promise!",
	"Hey everybody, check out my package!",
	"Place your bets!",
	"Defragmenting!",
	"Recompiling my combat code!",
	"Running the sequencer!",
	"It's happening... it's happening!",
	"It's about to get magical!"
};

static const std::string g_critical_hit_quotes[6] = {
	"Pop pop!",
	"Crit-i-cal!",
	"That looks like it hurts!",
	"WOW! I hit 'em!",
	"Extra ouch!",
	"Shwing!"
};

static const std::string g_melee_quotes[5] {
	"This is why you do your homework!",
	"Pain school is now in session.",
	"Guess who?",
	"Meet professor punch!",
	"Ready for the PUNCHline?!"
};

static const std::string *g_all_quotes[5] = {
	g_death_quotes,
	g_born_quotes,
	g_vaultexe_activated_quotes,
	g_critical_hit_quotes,
	g_melee_quotes
};

static const int g_all_quotes_sizes[5] = { 8, 2, 8, 6, 5 };

static const std::string g_vh_attacks[5] = {
	"fart",
	"cuty cat",
	"philosophy",
	"intellectual",
	"hack"
};

#endif