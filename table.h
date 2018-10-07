#include<iostream>
#include<string>
#include"hash.h"
#include"node.h"
using namespace std;
class table
{
public:
	table(){}
	int hashfn(int val_in, int size)
	{
		int index_ret;
		index_ret = val_in%size;
		cout << "Hashed index=" << index_ret << endl;
		return index_ret;
	}
	void HashInsert(int val_in, hashclass arr[], int size)
	{
		int index = hashfn(val_in, size);
		int temp = index;
		if (arr[temp].getValue() == 0)
		{
			arr[temp].setValue(val_in);
			cout << "Inserted in Hash table " << val_in << endl;
		}
		else
		{
			cout << "Inserting in linked list" << endl;
			arr[temp].head->insert(val_in, &(arr[temp].head));
		}
	}
	void search(int val_in, hashclass arr[], int size)
	{
		int index = hashfn(val_in, size);
		int temp = index;
		if (arr[temp].getValue() == val_in)
		{
			cout << "Value Found in HashTable" << endl;
		}
		else
		{
			cout << "Searching in List..." << endl;
			arr[temp].head->search(val_in, &(arr[temp].head));
		}
	}
	void print(hashclass arr[], int size)
	{
		for (int i = 0; i < size; i++)
		{
			cout << "Hash Table index:" << i << " has value:" << arr[i].getValue() << endl;
			cout << "Its List has followin values:" << endl;
			arr[i].head->print(arr[i].head);
			cout << endl;
		}
	}
};