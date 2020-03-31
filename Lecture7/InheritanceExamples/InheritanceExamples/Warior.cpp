#include "Warior.h"

Warior::Warior(string name, int maxHp, int atDamage, int critStrikeChance) : Character(name, maxHp, atDamage)
{
	this->CritStrikeChance = critStrikeChance;
}

double Warior::Strike()
{
	// TODO: implement this as real crit chance
	// throw random number from 0 - 100 if its lowet then crit chance
	// return atackDmg * 2;
	return this->atackDmg;
}
