// DeleteMiddleNode.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
using namespace std;

class DeleteMidNode {
public:
	int val;
	DeleteMidNode* next;
	DeleteMidNode(int i) : val(i), next(NULL) {}
};


void delmid(DeleteMidNode* head) {
	DeleteMidNode* p = new DeleteMidNode(0);
	p->next = head;
	DeleteMidNode* q = head;

	if (!q->next) { head = NULL; return; }

	while (q->next && q->next->next) {
		q = q->next->next;
		p = p->next;
	}

	p->next = p->next->next;

}

int main() {
	DeleteMidNode* head = new DeleteMidNode(0);
	DeleteMidNode* q = head;
	int a[16] = { 1,2,3,4,5,6,7,8,7,6,5,4,3,2,1,0 };

	for (int i = 0; i<16; i++) {
		DeleteMidNode* p = new DeleteMidNode(a[i]);
		q->next = p;
		q = p;
	}

	delmid(head);


	if (head == NULL) { cout << "Empty List" << endl; return 0; }
	while (head != NULL) {
		cout << head->val << " ";
		head = head->next;
	}
	cout << endl;

	system("pause");

	return 0;



}
