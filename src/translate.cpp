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
	map<char, wchar_t> dictionary;
	/*NOTE: */
	dictionary['a'] = '';
	dictionary['b'] = '';
	dictionary['c'] = '';
	dictionary['d'] = '';
	dictionary['e'] = '';
	dictionary['f'] = '';
	dictionary['g'] = '';
	dictionary['h'] = '';
	dictionary['i'] = '';
	dictionary['j'] = '';
	dictionary['k'] = '';
	dictionary['l'] = '';
	dictionary['m'] = '';
	dictionary['n'] = '';
	dictionary['o'] = '';
	dictionary['p'] = '';
	dictionary['q'] = '';
	dictionary['r'] = '';
	dictionary['s'] = '';
	dictionary['t'] = '';
	dictionary['u'] = '';
	dictionary['v'] = '';
	dictionary['w'] = '';
	dictionary['x'] = '';
	dictionary['y'] = '';
	dictionary['z'] = '';

	// initialize our final string
	string output;

	// loop through all characters in our lowercase string
	for (char i : lowercase)
	{
		// check if character exists in our dictionary
		if (dictionary[i] != '\0') {
			// add translated character to final string
			output += dictionary[i];
		}
		else {
			output += i;	// if char is not in our dictionary add our regular character to string
		}
	}

	// return our translation
	return output;
}
