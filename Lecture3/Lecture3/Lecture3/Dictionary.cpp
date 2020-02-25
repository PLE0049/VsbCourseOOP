#include "Dictionary.h"

bool Dictionary::IsUnique(KeyValue* kv)
{
	for (int i = 0; i < this->itemCount; i++)
	{
		if (this->array[i]->GetKey() == kv->GetKey())
		{
			return false;
		}
	}
	return true;
}

Dictionary::Dictionary(int size)
{
	this->array = new KeyValue * [size];
	this->arraySize = size;
	this->itemCount = 0;
}

Dictionary::~Dictionary()
{
	delete[] this->array;
	this->array = nullptr;
}

void Dictionary::AddKeyValue(KeyValue* kv)
{
	if (this->IsUnique(kv))
	{
		this->array[this->itemCount] = kv;
		this->itemCount++;
	}
}

double Dictionary::GetValueByIndex(int index)
{
	if (index < this->itemCount)
		return this->array[index]->GetValue();
	else
		return 0.0;
}

KeyValue* Dictionary::GetByKey(int key)
{
	for (int i = 0; i < this->itemCount; i++)
	{
		if (this->array[i]->GetKey() == key)
		{
			return this->array[i];
		}
	}
	return nullptr;
}
