// UniqueCharaters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class UniqCharters {
public:
	bool isunique1(string str) {
		for (int x = 0; x<str.size(); x++) {
			for (int y = 0; y<str.size(); y++) {
				if (x != y && str[x] == str[y]) {
					return false;
				}
			}
		}
		return true;
	}

	bool isunique2(string str) {
		bool* A = new bool[256];
		for (int x = 0; x<str.size(); x++) {
			if (A[str[x]] == true) {
				return false;
			}
			else {
				A[str[x]] = true;
			}
		}
		return true;
	}
};

int main() {
	UniqCharters UniqueString;
	cout << "Please Enter a set of Strings:" << endl;
	string stringss;
	cin >> stringss;
	cout << stringss << ": ";
	UniqueString.isunique1(stringss) ? (cout << "true" << endl) : (cout << "false" << endl);
	cout << stringss << ": ";
	UniqueString.isunique2(stringss) ? (cout << "true" << endl) : (cout << "false" << endl);
	system("pause");
	return 0;
}
