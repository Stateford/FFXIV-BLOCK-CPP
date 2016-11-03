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
	/*NOTE: */
	dictionary['a'] = 0xE071;
	dictionary['b'] = 0xE072;
	dictionary['c'] = 0xE073;
	dictionary['d'] = 0xE074;
	dictionary['e'] = 0xE075;
	dictionary['f'] = 0xE076;
	dictionary['g'] = 0xE077;
	dictionary['h'] = 0xE078;
	dictionary['i'] = 0xE079;
	dictionary['j'] = 0xE07A;
	dictionary['k'] = 0xE07B;
	dictionary['l'] = 0xE07C;
	dictionary['m'] = 0xE07D;
	dictionary['n'] = 0xE07E;
	dictionary['o'] = 0xE07F;
	dictionary['p'] = 0xE080;
	dictionary['q'] = 0xE081;
	dictionary['r'] = 0xE082;
	dictionary['s'] = 0xE083;
	dictionary['t'] = 0xE084;
	dictionary['u'] = 0xE085;
	dictionary['v'] = 0xE086;
	dictionary['w'] = 0xE087;
	dictionary['x'] = 0xE088;
	dictionary['y'] = 0xE089;
	dictionary['z'] = 0xE08A;
	dictionary[' '] = ' ';

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