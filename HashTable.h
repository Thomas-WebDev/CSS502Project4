// --------------------------------HashTable.h ---------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class HashTable, which
// uses open hashing to store information about Customer objects in a hash table
// -----------------------------------------------------------------------------

#pragma once
#include <iostream>
#include "Customer.h"

using namespace std;
int const MAX_CUSTOMERS = 1000; //maximum number of customers expected

class HashTable {
public:
	// ---------------------------- HashTable() ---------------------------------
	// Description: constructor of a customer HashTable object
	// --------------------------------------------------------------------------
	HashTable();
	// --------------------------- ~HashTable() ---------------------------------
	// Description: destructor of a customer HashTable object
	// --------------------------------------------------------------------------
	~HashTable();
	// ----------------------------- insert() -----------------------------------
	// Description: inserts Customer object (non-duplicate) into hash
	// --------------------------------------------------------------------------
	void insert(Customer*);
	// ------------------------------- get() ------------------------------------
	// Description: accessor of Customer based on ID, returns nullptr if not
	// found
	// --------------------------------------------------------------------------
	Customer* retrieve(string ID);
private:
	// ---------------------------- hashFunc() ----------------------------------
	// Description: identifies index of hash array to be inserted based on ID
	// --------------------------------------------------------------------------
	int hash(int);
	Customer* clients[MAX_CUSTOMERS];
	int count;
};
