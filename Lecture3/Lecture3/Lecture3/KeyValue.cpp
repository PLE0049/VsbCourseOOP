#include "KeyValue.h"

KeyValue::KeyValue(int k, double v)
{
	this->Key = k;
	this->Value = v;
}

int KeyValue::GetKey()
{
	return this->Key;
}

double KeyValue::GetValue()
{
	return this->Value;
}
