//Find the level in a binary tree with given sum K

// C++ program to print all
// K-sum levels in a Binary Tree
#include <bits/stdc++.h>
using namespace std;

// Vector to store the
// elements of a level
vector<int> level;

// Binary Tree Node
struct node {
	struct node* left;
	int data;
	struct node* right;
};

// Function to display elements
void display(bool flag)
{

	// Check if boolean variable is true
	// then print the level
	if (flag) {

		for (auto x : level)
			cout << x << " ";
	}

	else

		cout << "Not Possible\n";
}

// Function to find sum of
// elements by level order traversal
void SumlevelOrder(node* root, int k)
{

	if (root == NULL)
		return;

	// Queue data structure for
	// level order traversal
	queue<node*> q;

	// Enqueue Root in Queue
	q.push(root);

	bool flag = false;

	while (q.empty() == false) {

		// number of nodes at current level
		int nodeCount = q.size();

		int Present_level_sum = 0;

		// Dequeue all nodes of current level and
		// Enqueue all nodes of next level
		while (nodeCount > 0) {

			node* node = q.front();

			// To add node data
			Present_level_sum += node->data;

			level.push_back(node->data);

			q.pop();

			if (node->left != NULL)
				q.push(node->left);

			if (node->right != NULL)
				q.push(node->right);

			nodeCount--;
		}

		if (Present_level_sum == k) {

			flag = true;
			break;
		}

		level.clear();
	}

	display(flag);
}

// Function to create a new tree node
node* newNode(int data)
{
	node* temp = new node;
	temp->data = data;
	temp->left = NULL;
	temp->right = NULL;
	return temp;
}

// Driver code
int main()
{
	// Create binary tree
	node* root = newNode(1);

	root->left = newNode(2);
	root->right = newNode(3);

	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->right = newNode(6);

	int K = 15;

	SumlevelOrder(root, K);

	return 0;
}

// This code is contributed by @tanmaysharma17
