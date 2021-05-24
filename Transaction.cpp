// ------------------------------ Transaction.cpp ------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class Transaction, 
// which represents a Transaction of any type.
// -----------------------------------------------------------------------------

#include "Transaction.h"

Transaction::Transaction() {}

Transaction::~Transaction() {}

Movie * Transaction::getMovie() {
	return movie;
}

string Transaction::getType() {
	return transactionType;
}
