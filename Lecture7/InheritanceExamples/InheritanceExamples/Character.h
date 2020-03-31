#pragma once
#include <string>

using namespace std;

class Character
{
private:
	string name;
	int maxHp;
	int lvl;
protected:
	int atackDmg;
public:
	Character(string name, int maxHp, int atackDamage);
	double Strike();
	void LevelUp();
	int GetLevel();
};

