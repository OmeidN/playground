#include "playground.h"
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Partners : Omeid Nadery & Kyle Driver
/*

Omeid Nadery: Reverse a string without using loops.

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

*/


/* 

Kyle: Find the duplicate integer in an array.

bool checkForDupes(vector<int> list){
	vector<int> inList;
	for (int i = 0; i < list.size(); ++i){
		for (int j = i + 1; j < list.size(); ++j){
			if (list.at(i) == list.at(j)){
				cout << "Duplicate found: " << list.at(i) << endl;
				cout << "Duplicate locations: " << i << ", " << j << endl;
				return true;
			}
		}
	}
	return false;
}

int main()
{
	vector<int> hasdupe { 5, 3, 2, 1, 0, 4, 9, 8, 3, 50, 234, 858, 1000 };
	vector<int> nothasdupe { 5, 3, 2, 1, 0, 4, 9, 8, 348975983, 50, 234, 858, 1000 };

	cout << checkForDupes(hasdupe) << endl;
	cout << checkForDupes(nothasdupe) << endl;

}

*/
