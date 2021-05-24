// --------------------------------HashTable.h ---------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the implimentation of the class HashTable,
// which uses open hashing to store information about Customer objects in a hash 
// table
// -----------------------------------------------------------------------------

#include "HashTable.h"

HashTable::HashTable() {
	count = 0;
	for (int i = 0; i < MAX_CUSTOMERS; i++) {
		clients[i] = NULL;
	}
}

HashTable::~HashTable() {
	for (int i = 0; i < MAX_CUSTOMERS; i++) {
		delete clients[i];
	}
}

void HashTable::insert(Customer *c) {
	int location = hash(stoi(c->getID()));
	if (clients[location] == NULL) {
		clients[location] = c;
		count++;
	}
	else {
		cout << "ERROR: Failed to add new customer" << endl;
	}
}

Customer* HashTable::retrieve(string ID) {
	int index = 0;
	int location;
	int key = stoi(ID);
	location = key % MAX_CUSTOMERS;
	while (clients[location] != NULL) {
		if (ID == clients[location]->getID())
			return clients[location];
		index++;
		location = (key + index) % MAX_CUSTOMERS;
	}
	return NULL;
}

int HashTable::hash(int key) {
	int index = 0;
	int location;
	location = key % MAX_CUSTOMERS;
	while (clients[location] != NULL) {
		index++;
		location = (key + index) % MAX_CUSTOMERS;
	}
	return location;
}