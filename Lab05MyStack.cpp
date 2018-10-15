//Lab05MyStack.cpp
//Carlton Wilcox
//10-15-18
//Lab05
//Brandon Endsley, James Schuchardt, Will Kirkpatrick, Jon Caldwell, Matt Mcmenamin and I worked together on this lab.

#include "Lab05MyStack.h"



bool MyStack::isEmpty() const
{
	bool temp= data.empty();	
	return temp;
}

void MyStack::push(char & c)
{
	data.push_back(c);

	
}

char MyStack::pull()
{
	char temp = data.back();
	data.pop_back();
	return temp;
}
