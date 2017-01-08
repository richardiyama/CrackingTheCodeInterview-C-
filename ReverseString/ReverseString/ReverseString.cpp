// ReverseString.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"



#include <iostream>

using namespace std;

void reverse(char* stringss) {
	char* ed = stringss;
	char* st = stringss;
	while (*ed) { ed++; }
	ed--;
	while (st<ed) {
		char tmp = *st;
		*st = *ed;
		*ed = tmp;
		st++;
		ed--;
	}
	cout << stringss << endl;
}

int main() {
	char stringss[] = "abcdefghjka"; //If use char* = "adadaf", the memory is read-only, which will cause error
	cout << stringss << " -> ";
	reverse(stringss);
	system("pause");
	return 0;
}


