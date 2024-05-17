#include "playground.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Partners : Omeid Nadery & Kyle Driver

string reverseName(string& name){
	string temp = name;
	string reversed = "";
	char store;
	if(temp.size() != 0){
		char store = temp[0];
		temp = temp.substr(1, temp.size()-1);
		reversed += (reverseName(temp));
		reversed.push_back(store);		
	}
	return reversed;
	
}


int main()
{
	string name = "Omeid Nadery";
	cout << name << endl;

	name = reverseName(name);

	cout << "Reversed: " << name << endl;
	return EXIT_SUCCESS;
}



