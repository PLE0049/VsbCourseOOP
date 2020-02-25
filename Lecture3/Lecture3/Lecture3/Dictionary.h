#pragma once
#include "KeyValue.h"

class Dictionary
{
private:
	KeyValue** array;
	int arraySize;
	int itemCount;
	bool IsUnique(KeyValue* kv);

public:
	Dictionary(int size);
	~Dictionary();
	void AddKeyValue(KeyValue* kv);
	double GetValueByIndex(int index);
	KeyValue* GetByKey(int key);
};

