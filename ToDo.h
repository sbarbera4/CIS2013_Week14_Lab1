#include <iostream>
#include <cstring>

using namespace std;

class ToDo
{
private:

	string *list;
	int length = 0;
	int next = 0;


public:

	//create list of length len
	ToDo(int len);

	//destroy out list
	~ToDo();

	//add item to list
	void add(string item);

	//finish last thing in list
	 void done();

	 //print list
	void print();




};