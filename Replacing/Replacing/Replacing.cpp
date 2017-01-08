// Replacing.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>

using namespace std;

class Replacing {
public:
	void replace(string &strings) {
		int sz = strings.size();
		int c = 0;
		if (sz == 0) { return; }
		for (int i = sz - 1; i >= 0; i--) {
			if (strings[i] == ' ') { c++; }
		}
		int j = sz + c * 2;
		strings = strings + string(c * 2, ' ');
		for (int i = sz - 1; i >= 0; i--) {
			if (strings[i] != ' ') {
				strings[--j] = strings[i];
			}
			else {
				strings[--j] = '%';
				strings[--j] = '0';
				strings[--j] = '2';
			}
		}
	}
};

int main() {

	Replacing replaced;
	string strings = "I am programming c++ language.    That's good!";
	cout << strings << endl;
	replaced.replace(strings);
	cout << strings << endl;
	system("pause");
	return 0;
}
