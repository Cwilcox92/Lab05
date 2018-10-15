//Lab05MyStack.h
//Carlton Wilcox
//10-15-18
//Lab05
//Brandon Endsley, James Schuchardt, Will Kirkpatrick, Jon Caldwell and I worked together on this lab.

#pragma once

#include <vector>

using std::vector;


class MyStack
{
public:
	bool isEmpty() const;
	void push(char& c);
	char pull();
	
private:
	vector<char> data;


};