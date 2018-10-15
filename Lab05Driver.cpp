//Lab05Driver.cpp
//Carlton Wilcox
//10-15-18
//Lab05
//Brandon Endsley, James Schuchardt, Will Kirkpatrick, Jon Caldwell and I worked together on this lab.

#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <list>
#include "Lab05MyStack.h"


using std::string;
using std::stack;
using std::cin;
using std::cout;
using std::vector;
using std::list;

string stringReversal1(string input);
string stringReversal2(string input);
string stringReversal3(string input);
string stringReversal4(string input);


int main()
{
	string holder;
	cout << "----Please Enter a Sting to Reverse (Using Stack)----"<<"\n"<<"Original String: ";
	cin >> holder;
	cout<<"Revered String: "<<stringReversal1(holder)<<"\n\n";
	cout << "----Please Enter a Sting to Reverse (Using Vector)----" << "\n" << "Original String: ";
	cin >> holder;
	cout << "Revered String: " << stringReversal2(holder) << "\n\n";
	cout << "----Please Enter a Sting to Reverse (Using List)----" << "\n" << "Original String: ";
	cin >> holder;
	cout << "Revered String: " << stringReversal3(holder) << "\n\n";
	cout << "----Please Enter a Sting to Reverse (Using MyList)----" << "\n" << "Original String: ";
	cin >> holder;
	cout << "Revered String: " << stringReversal4(holder) << "\n\n";
	system("pause");

	return 0;
}

string stringReversal1(string input)
{
	stack<char> stringStack;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		stringStack.push(input.at(i));
		
	}

	cout << "\n\n";
	string temp;

	for (int i = 0; i < input.length(); i++)
	{
		
		temp.push_back(stringStack.top());
		stringStack.pop();
	}
	

	return temp;
}

string stringReversal2(string input)
{
	vector<char> stringStack;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		stringStack.push_back(input.at(i));

	}

	cout << "\n\n";
	string temp;

	for (int i = 0; i < input.length(); i++)
	{
		temp = stringStack.back();
		out.append(temp);
		stringStack.pop_back();
	}


	return out;
}

string stringReversal3(string input)
{
	list<char> stringStack;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		stringStack.push_back(input.at(i));

	}

	cout << "\n\n";
	string temp;

	for (int i = 0; i < input.length(); i++)
	{
		temp = stringStack.back();
		out.append(temp);
		stringStack.pop_back();
	}


	return out;
}

string stringReversal4(string input)
{
	MyStack stringStack;
	string out;

	for (int i = 0; i < input.length(); i++)
	{
		stringStack.push(input.at(i));

	}

	cout << "\n\n";
	string temp;

	for (int i = 0; i < input.length(); i++)
	{
		temp = stringStack.pull();
		out.append(temp);
		
	}


	return out;
}










