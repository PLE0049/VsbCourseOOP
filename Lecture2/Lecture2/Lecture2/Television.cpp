#include "Television.h"

Television::Television()
{
	this->channel = 1;
	this->volume = 30;
	this->isOn = false;
}

void Television::TurnOn()
{
	this->isOn = true;
}

void Television::TurnOff()
{
	this->isOn = false;
}

void Television::SetChannel(int c)
{
	this->channel = c;
}

int Television::GetChannel()
{
	return this->channel;
}

void Television::SetVolume(int v)
{
	this->volume = v;
}

int Television::GetVolume()
{
	return this->volume;
}
