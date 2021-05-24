// ----------------------------- Clients.cpp -----------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the implimentation of the class clients. This 
// class represents the all customers of the store. 
// -----------------------------------------------------------------------------

#include "Clients.h"

Clients::Clients() {
	buildClientList();
}


Clients::~Clients() {
}

void Clients::buildClientList() {

	ifstream infile2("data4customers.txt");
	if (!infile2) {
		cout << "File could not be opened." << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		return;
	}

	string id;
	string firstName;
	string lastName;

	for (;;) {
		id = "";
		lastName = "";
		firstName = "";
		if (infile2.eof())
			break;
		else {
			infile2 >> id;
			if (id != "") {
				infile2 >> lastName;
				infile2 >> firstName;
				clients.insert(new Customer(id, lastName, firstName));
			}
		}
	}
}

void Clients::displayClientList() {
}

Customer * Clients::getCustomer(string ID) {
	return clients.retrieve(ID);
}
