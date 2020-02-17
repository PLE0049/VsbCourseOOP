#pragma once
class Television
{
private :
	bool isOn;
	int channel;
	int volume;

public : 
	void SetChannel(int channel);
	int GetChannel();
	void SetVolume(int volume);
	// void IncreaseVolume();
	// void DecreaseVolume();
	int GetVolume();
};

