// --------------------------------Customer.h ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class Customer, which
// represents a Customer and its relevant transactions.
// -----------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// -----------------------------------------------------------------------------

#ifndef CUSTOMER_H
#define CUSTOMER_H

#include "Transaction.h"
#include "Movie.h"
#include "Borrow.h"
#include "Return.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer {
public:
	// ---------------------------- Customer() ----------------------------------
	// Description: constructor of a Customer object
	// --------------------------------------------------------------------------
	Customer();
	// ----------------- Customer(string, string, string) -----------------------
	// Description: constructor of a Customer object
	// --------------------------------------------------------------------------
	Customer(string, string, string);
	// ---------------------------- ~Customer() ---------------------------------
	// Description: destructor of a Customer object  
	// --------------------------------------------------------------------------
	~Customer();
	void setID(string);
	// --------------------------- setFirstName() -------------------------------
	// Description: mutator for firstName attribute   
	// --------------------------------------------------------------------------
	void setFirstName(string);
	// ---------------------------- setLastName() -------------------------------
	// Description: mutator for lastName attribute  
	// --------------------------------------------------------------------------
	void setLastName(string);
	// ------------------------------- getID() ----------------------------------
	// Description: accessor for ID attribute   
	// --------------------------------------------------------------------------
	string getID();
	// --------------------------- getFirstName() -------------------------------
	// Description: accessor for firstName attribute  
	// --------------------------------------------------------------------------
	string getFirstName();
	// ---------------------------- getLastName() -------------------------------
	// Description: accessor for lastName attribute   
	// --------------------------------------------------------------------------
	string getLastName();
	// ---------------------------- addToHistory() ------------------------------
	// Description: adds a Borrow or Return transaction to end of history vector
	// --------------------------------------------------------------------------
	void addToHistory(Transaction*);
	// --------------------------- displayCustomer() ----------------------------
	// Description: display to output customer ID and name
	// --------------------------------------------------------------------------
	void displayCustomer();
	// --------------------------- displayHistory() -----------------------------
	// Description: display to output customer transaction history
	// --------------------------------------------------------------------------
	void displayHistory();
	// --------------------------- checkHistory() -----------------------------
	// Description: 
	// --------------------------------------------------------------------------
	bool checkHistory(Movie*);
private:
	string id;
	string firstName;
	string lastName;
	vector<Transaction*>history;
};

#endif