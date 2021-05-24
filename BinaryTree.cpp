// ----------------------------- BinaryTree.cpp ---------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: Implimentation of the methods to create a ADT for a Binary Search 
// Tree
// -----------------------------------------------------------------------------

#include "BinaryTree.h"

/*
Pre: None
Post: Returns true if the BST is empty.
*/
bool BinaryTree::isEmpty() const {
	return (root == NULL);
}

// Calls inorder
void BinaryTree::inorderTraversal() const {
	inorder(root);
}

/*
Pre: None
Post: Outputs all nodes of the tree using inorder from greatest to least to console seperated by lines
*/
void BinaryTree::inorder(treeNode* p) const {
	if (p != NULL) {
		inorder(p->left);
		p->info->display();
		inorder(p->right);
	}
}

/*
Pre: Takes reference to a pointer to a node and a  pointer to a node
Post: Copies the BST pointed to into the reference pointer
*/
void BinaryTree::copyTree(treeNode*& r, treeNode* o) const {
	if (o == NULL) {
		r = NULL;
	}
	else {
		r = new treeNode;
		r->info = o->info;
		copyTree(r->left, o->left);
		copyTree(r->right, o->right);
	}

}

// Calls destroy
void BinaryTree::destroyTree() {
	destroy(root);
}

/*
Pre: None
Post: Removes all values from the list
*/
void BinaryTree::destroy(treeNode* &p) const {
	if (p != NULL) {
		destroy(p->left);
		destroy(p->right);
		delete p;
		p = NULL;
	}
}

// Copy constructor
BinaryTree::BinaryTree(const BinaryTree& o) {
	if (o.root == NULL) {
		root = NULL;
	}
	else
		copyTree(root, o.root);
}

// Constructor
BinaryTree::BinaryTree() {
	root = NULL;
}

// Destructor
BinaryTree::~BinaryTree() {
	destroy(root);
}

/*
Pre: Takes a constant reference BST
Post: Returns a constant reference to a BST with the same value as the passed one.
*/

//CLASSIC
Movie * BinaryTree::retrieve(int month, int year, string actor) {
	treeNode *curr;
	if (root == NULL)
		return NULL;
	else {
		curr = root;
		while (curr != NULL) {
			if (curr->info->getMonth() == month && curr->info->getYear() == year && curr->info->getActorName() == actor)
				return curr->info;
			else {
				if (curr->info->getYear() != year) {
					if (curr->info->getYear() > year)
						curr = curr->left;
					else
						curr = curr->right;
				}
				else if (curr->info->getMonth() != month) {
					if(curr->info->getMonth() > month)
						curr = curr->left;
					else
						curr = curr->right;
				} 
				else {
					if (curr->info->getActorName() > actor)
						curr = curr->left;
					else
						curr = curr->right;
				}
			}
		}
	}
	return NULL;
}

Movie * BinaryTree::retrieve(string title, int year) {
	treeNode *curr;
	if (root == NULL)
		return NULL;
	else {
		curr = root;
		while (curr != NULL) {
			if (curr->info->getTitle() == title && curr->info->getYear() == year)
				return curr->info;
			else {
				if (curr->info->getTitle() != title) {
					if (curr->info->getTitle() > title)
						curr = curr->left;
					else
						curr = curr->right;
				}
				else {
					if (curr->info->getYear() > year)
						curr = curr->left;
					else
						curr = curr->right;
				}
			}
		}
	}
	return NULL;
}

Movie * BinaryTree::retrieve(string director, string title) {
	treeNode *curr;
	if (root == NULL)
		return NULL;
	else {
		curr = root;
		while (curr != NULL) {
			if (curr->info->getDirectorName() == director && curr->info->getTitle() == title)
				return curr->info;
			else {
				if (curr->info->getDirectorName() != director) {
					if (curr->info->getDirectorName() > director)
						curr = curr->left;
					else
						curr = curr->right;
				}
				else {
					if (curr->info->getTitle() > title)
						curr = curr->left;
					else
						curr = curr->right;
				}
			}
		}
	}
	return NULL;
}
	
const BinaryTree& BinaryTree::operator=(const BinaryTree &o) {
	if (this != &o) {
		if (root != NULL)
			destroy(root);
		if (o.root == NULL) {
			root = NULL;
		}
		else
			copyTree(root, o.root);
	}
	return *this;
}

/*
Pre: A T with the value of the node to be inserted
Post: Inserts the node and reasigns pointers to keep tree in order
*/
treeNode* BinaryTree::search(const Movie*& item) const {
	treeNode *curr = NULL;
	bool found = false;
	if (root == NULL) {
		delete item;
		return curr;
	}
	else {
		curr = root;
		while (curr != NULL && !found) {
			if (curr->info == item)
				found = true;
			else if (curr->info > item)
				curr = curr->left;
			else
				curr = curr->right;
		}
	}
	delete item;
	return curr;
}

/*
Pre: A T with the value of the node to be inserted
Post: Inserts the node and reasigns pointers to keep tree in order
*/
void BinaryTree::insert(Movie* item) {
	treeNode *curr, *tail = NULL, *newNode;
	newNode = new treeNode;
	newNode->info = item;
	newNode->left = NULL;
	newNode->right = NULL;
	if (root == NULL)
		root = newNode;
	else {
		curr = root;
		while (curr != NULL) {
			tail = curr;
			if (*curr->info == *item) {
				curr = curr->left;
			}
			else if (*curr->info > *item)
				curr = curr->left;
			else {
				curr = curr->right;
			}
		}
		if (*tail->info > *item || (*tail->info == *item))
			tail->left = newNode;
		else
			tail->right = newNode;
	}
}