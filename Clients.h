// ------------------------------- Clients.h -----------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class clients. This 
// class represents the all customers of the store. 
// -----------------------------------------------------------------------------

#ifndef CLIENTS_H
#define CLIENTS_H

#include <iostream>
#include <fstream>
#include <string>
#include "HashTable.h"
#include "Customer.h"

class Clients {
public:
	// ---------------------------- Clients() -----------------------------------
	// Description: constructor of a Clients object
	// --------------------------------------------------------------------------
	Clients();
	// --------------------------- ~Clients() -----------------------------------
	// Description: destructor of a Clients object
	// --------------------------------------------------------------------------
	~Clients();
	// ---------------------------- buildClientList() ---------------------------
	// Description: constructor of a Clients object
	// --------------------------------------------------------------------------
	void buildClientList();
	// ---------------------------- displayClientList() -------------------------
	// Description: constructor of a Clients object
	// --------------------------------------------------------------------------
	void displayClientList();
	// ---------------------------- getCustomer() -------------------------------
	// Description: constructor of a Clients object
	// --------------------------------------------------------------------------
	Customer* getCustomer(string);
private:
	HashTable clients;
};

#endif