// DuplicateCharacters.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <string>

using namespace std;

bool isAnag(string &string1, string &string2) {
	if (string1.size() != string2.size()) { return false; }
	int *A = new int[256];
	for (int i = 0; i<string1.size(); i++) {
		A[string1[i]]++;
	}
	for (int i = 0; i<string2.size(); i++) {
		if (A[string2[i]] <= 0) { return false; }
		A[string2[i]]--;
	}
	return true;
}

int main() {
	string string1 = "aaabb";
	string string2 = "aabbb";
	cout << isAnag(string1, string2);
	system("pause");
	return 0;

}
