#include<iostream>
#include<string>
#include"node.h"
#include"hash.h"
#include"table.h"
using namespace std;
void main()
{
	const int size = 10;
	table H;
	hashclass N[size];
	for (int i = 0; i < size; i++)
	{
		N[i].setValue(0);
	}
	H.HashInsert(20, N, size);
	cout << endl;
	H.HashInsert(30, N, size);
	cout << endl;
	H.HashInsert(40, N, size);
	cout << endl;
	H.HashInsert(21, N, size);
	cout << endl;
	H.HashInsert(31, N, size);
	cout << endl;
	H.HashInsert(69, N, size);
	cout << endl;
	H.HashInsert(79., N, size);
	cout << endl;
	H.search(40, N, size);
	cout << endl;
	H.print(N, size);
	system("pause");
}