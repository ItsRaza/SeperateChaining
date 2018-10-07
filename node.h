#include<iostream>
#include<string>
#pragma once
using namespace std;
class node
{
protected:
	int value;
	node *next;
public:
	node(){}
	int getVal()
	{
		return this->value;
	}
	void setVal(int val_in)
	{
		this->value = val_in;
	}
	void insert(int val_in, node **head)
	{
		node *ptr = new(node);
		ptr->value = val_in;
		ptr->next = NULL;
		if (*head == NULL)
		{
			*head = ptr;
			cout << "Value inserted on head " << val_in << endl;
			return;
		}
		else
		{
			node *curr = *head;
			while (curr->next != NULL)
			{
				curr = curr->next;
			}
			curr->next = ptr;
			cout << "Value inserted in list " << val_in << endl;
		}
	}
	void print(node *start)
	{
		if (start == NULL)
		{
			cout << "List is empty" << endl;
		}
		else
		{
			node *curr = start;
			while (curr->next != NULL)
			{
				cout << "Value=" << curr->value << endl;
				curr = curr->next;
			}
			cout << "Value=" << curr->value << endl;
		}
	}
	void search(int val_in, node **strt_in)
	{
		if (*strt_in == NULL)
		{
			cout << "list is empty" << endl;
		}
		else
		{
			int temp = 0;
			node *curr = *strt_in;
			while (curr != NULL)
			{
				if (curr->value == val_in)
				{
					cout << "found" << endl;
					temp++;
					break;
				}
				curr = curr->next;
			}
			if (temp == 0)
			{
				cout << "not found" << endl;
			}
		}
	}
	node operator=(node& clone)
	{
		this->value = clone.value;
		this->next = clone.next;
		return *this;
	}
};