// --------------------------------- Return.h ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class Return, which is a 
// child of Transaction and creates a Transaction of type Return and does that 
// transaction.
// -----------------------------------------------------------------------------

#ifndef RETURN_H
#define RETURN_H

#include "Transaction.h"
#include "Customer.h"

using namespace std;

class Return : public Transaction {
public:
	// ----------------------------- Return(Movie*) --------------------------------
	// Description: constructor of a Return movie object.
	// -----------------------------------------------------------------------------
	Return(Movie*);
	// --------------------------------- ~Return() ---------------------------------
	// Description: destructor of a Return  object.
	// -----------------------------------------------------------------------------
	~Return();
	// --------------------------------- display() ---------------------------------
	// Description: The declaration of a method to displays the data.
	// -----------------------------------------------------------------------------
	virtual void display();
	// ------------------------------ doTransaction() ------------------------------
	// Description: The declaration of a method to does the Transaction.
	// -----------------------------------------------------------------------------
	virtual void doTransaction();
	// ------------------------------ getMovie() -----------------------------------
	// Description: Returns a pointer to the movie on which the transaction was 
	// performed.
	// -----------------------------------------------------------------------------
	virtual Movie* getMovie();
	// ------------------------------ getType() ------------------------------------
	// Description: Returns a string containing the transaction type.
	// -----------------------------------------------------------------------------
	virtual string getType();
};

#endif