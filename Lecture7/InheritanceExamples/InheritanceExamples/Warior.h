#pragma once
#include "Character.h"

class Warior : public Character
{
private:
	int CritStrikeChance;
public:
	Warior(string name, int maxHp, int atDamage, int critStrikeChance);
	double Strike();
};

