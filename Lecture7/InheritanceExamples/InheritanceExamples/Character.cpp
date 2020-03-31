#include "Character.h"

Character::Character(string name, int maxHp, int atackDamage)
{
	this->maxHp = maxHp;
	this->name = name;
	this->lvl = 0;
	this->atackDmg = atackDamage;
}

double Character::Strike()
{
	return this->atackDmg;
}

void Character::LevelUp()
{
	this->lvl++;
}

int Character::GetLevel()
{
	return this->lvl;
}
