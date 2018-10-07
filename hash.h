#include<iostream>
#include<string>
#include"node.h"
#pragma once
using namespace std;
class hashclass
{
protected:
	int value;
public:
	node *head = NULL;
	hashclass()
	{

	}
	int getValue()
	{
		return this->value;
	}
	void setValue(int val)
	{
		this->value = val;
	}
};