#pragma once
class KeyValue
{
private:
	int Key;
	double Value;
public:
	KeyValue(int k, double v);
	int GetKey();
	double GetValue();
};
