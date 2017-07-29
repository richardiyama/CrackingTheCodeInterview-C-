// CheckSubstring.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>

using namespace std;


class CheckSubstring {
public:
	bool check(string string1, string string2) {
		string1 = string1 + string1;
		if (string1.find(string2) == -1)
			return false;
		else
			return true;
	}
};

int main() {

	CheckSubstring CheckSub;
	string string1 = "erbottlewat";
	string string2 = "waterbottle";

	if (CheckSub.check(string1, string2))
		cout << string1 << " is a rotation of " << string2 << endl;
	else
		cout << string1 << " is NOT a rotation of " << string2 << endl;
	system("pause");
	return 0;
}

