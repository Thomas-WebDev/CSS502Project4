// --------------------------- TransactionFactory.h ----------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class TransactionFactory,
// which instantiates a Transaction object of the given Transaction type.
// -----------------------------------------------------------------------------

#ifndef TRANSACTIONFACTORY_H
#define TRANSACTIONFACTORY_H

#include "Transaction.h"
#include "Borrow.h"
#include "Return.h"
#include <string>

using namespace std;

class TransactionFactory {
public:
	// ------------------ factory(string, Customer*, Movie*) -----------------------
	// Description: Creates a transaction object of a specific type depending on 
	// type argument and adds it to the customer's history
	// -----------------------------------------------------------------------------
	void factory(string, Customer*, Movie*);
};

#endif