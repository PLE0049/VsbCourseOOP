#pragma once
class Television
{
private :
	bool isOn;
	int volume;
	int channel;

public:
	Television();
	void TurnOn();
	void TurnOff();
	void SetChannel(int c);
	int GetChannel();
	void SetVolume(int v);
	int GetVolume();

	// void IncreaseVolume();
    // void DecreaseVolume();
};

