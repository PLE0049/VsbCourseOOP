#include "Mage.h"

Mage::Mage(string name, int maxHp, int maxMana) : Character(name, maxHp, 80)
{
	this->maxMana = maxMana;
}
