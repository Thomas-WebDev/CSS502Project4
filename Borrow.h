// ------------------------------- Borrow.h -----------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class Return, which is a 
// child of Transaction and creates a Transaction of type Return and does that 
// transaction.
// -----------------------------------------------------------------------------

#ifndef BORROW_H
#define BORROW_H

#include "Transaction.h"
#include "Customer.h"

using namespace std;

class Borrow : public Transaction {
public:
	// ----------------------------- Borrow(Movie*) --------------------------------
	// Description: constructor of a Return movie object.
	// -----------------------------------------------------------------------------
	Borrow(Movie *); // Constructor
	// --------------------------------- ~Borrow() ---------------------------------
	// Description: destructor of a Borrow  object.
	// -----------------------------------------------------------------------------
	~Borrow(); // Deconstructor
	// --------------------------------- display() ---------------------------------
	// Description: The declaration of a  method to displays the data.
	// -----------------------------------------------------------------------------
	virtual void display();
	// ------------------------------ doTransaction() ------------------------------
	// Description: The declaration of a method to does the Transaction.
	// -----------------------------------------------------------------------------
	virtual void doTransaction();
	virtual Movie* getMovie();
	virtual string getType();
};

#endif