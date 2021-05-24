// ------------------------------- Return.cpp ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the implimentation of the class Return, which is
// a child of Transaction and creates a Transaction of type Return and does that 
// transaction.
// -----------------------------------------------------------------------------

#include "Return.h"

Return::Return(Movie *m) {
	transactionType = "Return";
	movie = m;
	doTransaction();
}


Return::~Return() {}

void Return::display() {
	cout << "      " << transactionType << " ";
	movie->displayWithoutStock();
}

void Return::doTransaction() {
	movie->setStock(movie->getStock() + 1);
}

Movie * Return::getMovie() {
	return movie;
}

string Return::getType() {
	return transactionType;
}
