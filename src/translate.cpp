// translate.cpp

#include <string>
#include <map>
#include <algorithm>

using namespace std;

string translate(string x)
{
	
	// transform string to lowercase
	string lowercase = x;
	transform(lowercase.begin(), lowercase.end(), lowercase.begin(), ::tolower);

	// create our dictionary
	map<char, char> dictionary;
	dictionary['a'] = 'z';
	dictionary['b'] = 'y';

	// initialize our final string
	string output;

	// loop through all characters in our lowercase string
	for (char i : lowercase)
	{
		// add translated character to final string
		output += dictionary[i];
	}

	// return our translation
	return output;
}