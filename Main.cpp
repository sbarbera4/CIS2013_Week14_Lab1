#include <iostream>
#include <cstring>
#include "ToDo.h"

using namespace std;

int main()
{
	char next = 'y';
	int len = 0;
	string action;

	cout << "how long is your list: ";
	cin >> len;

	ToDo list(len);


	while (next != 'n')
	{

		cout << "Add to list(a)" << endl;
		cout << "done list item(d)" << endl;
		cout << "print list(p)" << endl;
		cout << "exit list app(x)" << endl;
		cout << "what do you want to do: ";
		cin >> next;

		switch (next)
		{
		case 'a':
			//add stuff to list
			list.add("something")
			cin >> action;
			list.add(action);
			break;

		case 'd':
			//finish something in list
			list.done();

			break;

		case 'p':
			//print list
			list.print();

			break;

		case 'x':
			//all done with todo list


			break;

		}
	}
}