// --------------------------- BuisnessLogic.h ---------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class BuisnessLogic, which
// instantiates a BuisnessLogic object and initializes instances of all other 
// necessary classes.
// -----------------------------------------------------------------------------

#ifndef BUISNESSLOGIC_H
#define BUISNESSLOGIC_H

#include "Customer.h"
#include "Stock.h"
#include "MovieFactory.h"
#include "TransactionFactory.h"
#include "Movie.h"
#include "Clients.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class BuisnessLogic {
public:
	// ---------------------------- BuisnessLogic() --------------------------------
	// Description: constructor of a BuisnessLogic object. 
	// -----------------------------------------------------------------------------
	BuisnessLogic();
	// ---------------------------- BuisnessLogic() --------------------------------
	// Description: destructor of a BuisnessLogic object. 
	// -----------------------------------------------------------------------------
	~BuisnessLogic();
	// ------------------------------ testSystem() ---------------------------------
	// Description: Tests all functions by taking input from a text file
	// -----------------------------------------------------------------------------
	void testSystem();
	// --------- customerTransaction(string, string, ifstream&) --------------------
	// Description: Calls all functions requiring a customer as a parameter
	// -----------------------------------------------------------------------------
	void customerTransaction(string transactionType, string customerID, ifstream& in);
private:
	Stock stock;
	Clients clients;
};

#endif