#include "Television.h"

void Television::SetChannel(int channel)
{
	this->channel = channel;
}

int Television::GetChannel()
{
	return this->channel;
}

void Television::SetVolume(int volume)
{
	this->volume = volume;
}

int Television::GetVolume()
{
	return this->volume;
}
