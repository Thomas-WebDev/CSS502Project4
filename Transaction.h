// -------------------------------- Transaction.h -----------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class Transaction, 
// which represents a Transaction of any type.
// -----------------------------------------------------------------------------

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <iostream>
#include "Movie.h"

using namespace std;

class Transaction {
public:
	// ----------------------- Transaction(Movie*) -----------------------------
	// Description: constructor of a Transaction movie object.
	// -------------------------------------------------------------------------
	Transaction(); // Constructor
	// ------------------------- ~Transaction() --------------------------------
	// Description: destructor of a Transaction  object.
	// -------------------------------------------------------------------------
	~Transaction(); // Deconstructor
	// ------------------------------ display() --------------------------------
	// Description: The pure abstract declaration of a method to display the
	// data for the Transaction.
	// -------------------------------------------------------------------------
	virtual void display() = 0;
	// ----------------------- doTransaction(Movie*) ---------------------------
	// Description: The pure abstract declaration of a  method to does the 
	// Transaction.
	// -------------------------------------------------------------------------
	virtual void doTransaction() = 0;
	// ---------------------------- getMovie() ---------------------------------
	// Description: Returns the movvie the transaction is performed on.
	// -------------------------------------------------------------------------
	virtual Movie* getMovie();
	// ----------------------------- getType() ---------------------------------
	// Description: Returns the type of transaction.
	// -------------------------------------------------------------------------
	virtual string getType();
protected:
	Movie * movie; // A pointer to the movie on which the transaction is being made
	string transactionType; // Type of Transaction
};

#endif