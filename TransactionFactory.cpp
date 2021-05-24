// ------------------------- TransactionFactory.cpp ----------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the implimentation of the class
// TransactionFactory, which instantiates a Transaction object of the given 
// Transaction type.
// -----------------------------------------------------------------------------

#include "TransactionFactory.h"

void TransactionFactory::factory(string transactionType, Customer* customer, Movie* movie)
{
	int counter = 0;
	if (transactionType == "B")
		customer->addToHistory(new Borrow(movie));
	else if (transactionType == "R") { //FIND MOVIE IF BORROWED
		if (customer->checkHistory(movie))
			customer->addToHistory(new Return(movie));
		else {
			cout << "ERROR: The transaction cannot be processed. You have not borrowed this movie..." << endl;
			customer->displayCustomer();
			movie->displayWithoutStock();
			cout << "-------------------------------------------------------------------------------------" << endl;
		}
	}
	else
		cout << endl << "ERROR: Transaction Type could not be determined. No action will be taken" << endl;
}
