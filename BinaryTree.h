// ------------------------------- BinaryTree.h ---------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: Declaration of the methods to create a ADT for a Binary Search Tree
// -----------------------------------------------------------------------------

#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>
#include "Movie.h"

using namespace std;

// Node structure
struct treeNode {
	Movie *info;
	treeNode *left;
	treeNode *right;
};

class BinaryTree {
public:
	//-------------------- retrieve(int, int, string) ------------------------------
	// Get the Movie of a given object in the tree by comparing the month, year and 
	// actor of the object and returns a pointer to the movie.
	// -----------------------------------------------------------------------------
	Movie * retrieve(int month, int year, string actor);
	//---------------------- retrieve(string, int) ---------------------------------
	// Get the Movie of a given object in the tree by comparing the title and year 
	// of the object and returns a pointer to the movie.
	// -----------------------------------------------------------------------------
	Movie * retrieve(string title, int year);
	//-------------------- retrieve(string, string) --------------------------------
	// Get the Movie of a given object in the tree by comparing the title and 
	// director of the object and returns a pointer to the movie.
	// -----------------------------------------------------------------------------
	Movie * retrieve(string director, string title);
	// ----------------------------- operator=() -----------------------------------
	// Takes a constant reference BST and returns a constant reference to a BST with 
	// the same value as the passed one.
	// -----------------------------------------------------------------------------
	const BinaryTree& operator=(const BinaryTree&);
	// ----------------------------- isEmpty() -------------------------------------
	// Pre: None
	// Post : Returns true if the BST is empty.
	// -----------------------------------------------------------------------------
	bool isEmpty() const;
	void inorderTraversal() const; // Calls inorder
	void destroyTree();            // Calls destroy
	// ----------------------------- search(const Movie*&) -------------------------
	// Takes a movie with the value of the node to be found. Returns a pointer to
	// the node with the passed value or to a nullptr if not present in BST.
	// -----------------------------------------------------------------------------
	treeNode* search(const Movie*&) const;
	// ----------------------------- insert(Movie*) --------------------------------
	// A movie with the value of the node to be inserted. Inserts the node and 
	// reasigns pointers to keep tree in order
	// -----------------------------------------------------------------------------
	void insert(Movie*);
	BinaryTree(const BinaryTree&);  // Copy constructor
	BinaryTree();                   // Constructor
	~BinaryTree();                  // Deconstructor
protected:
	treeNode * root;
private:
	// ---------------  copyTree(treeNode*&, treeNode*) ----------------------------
	// Pre: Takes reference to a pointer to a node and a  pointer to a node
	// Post: Copies the BST pointed to into the reference pointer
	// -----------------------------------------------------------------------------
	void copyTree(treeNode*&, treeNode*) const;
	// ----------------------------- destroy(treeNode*&) ---------------------------
	// Pre: None
	// Post: Removes all values from the list
	// -----------------------------------------------------------------------------
	void destroy(treeNode*&) const;
	// ----------------------------- inorder(treeNode*) ----------------------------
	// Pre: None
	// Post: Outputs all nodes of the tree using inorder from greatest to least to 
	// console seperated by lines
	// -----------------------------------------------------------------------------
	void inorder(treeNode*) const;
};

#endif