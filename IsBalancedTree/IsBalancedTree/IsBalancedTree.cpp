// IsBalancedTree.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <math.h>

/**
* Definition for a binary tree node.
* struct TreeNode {
	*int val;
	*TreeNode *left;
	*TreeNode *right;
	*TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	*
};
*/
using namespace std;


int getHeight(TreeNode* root) {
	return root == NULL ? 0 : 1 +
		max(getHeight(root->left), getHeight(root->right));
}