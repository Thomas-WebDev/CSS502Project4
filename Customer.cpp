// ------------------------------ Customer.cpp ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the implimentation of the class Customer,
// which represents a Customer and its relevant transactions.
// -----------------------------------------------------------------------------
// Notes on specifications, special algorithms, and assumptions.
// -----------------------------------------------------------------------------

#include "Customer.h"

Customer::Customer() {
	id = "";
	firstName = "";
	lastName = "";
}

Customer::Customer(string n, string ln, string fn) {
	setID(n);
	setLastName(ln);
	setFirstName(fn);
}


Customer::~Customer() {}

void Customer::setID(string n) {
	id = n;
}

void Customer::setFirstName(string name) {
	firstName = name;
}

void Customer::setLastName(string name) {
	lastName = name;
}

string Customer::getID() {
	return id;
}

string Customer::getFirstName() {
	return firstName;
}

string Customer::getLastName() {
	return lastName;
}

void Customer::addToHistory(Transaction *t) {
	history.push_back(t);
	if (history.back() == NULL) {
		history.pop_back();
	}
}

void Customer::displayCustomer() {
	cout << getID() << ", " << getLastName() << ", " << getFirstName() << endl;
}

void Customer::displayHistory() {
	displayCustomer();
	if (history.size() == 0) {
		cout << "      No transaction history on record" << endl;
	}
	else {
		for (int j = history.size() - 1; j >= 0; j--) {
			history.at(j)->display();
		}
	}
	cout << "-------------------------------------------------------------------------------------" << endl;
}

bool Customer::checkHistory(Movie *m) {
	if (history.size() != 0) {
		for (unsigned j = 0; j < history.size(); j++) {
			if (history.at(j)->getType() == "Borrow") {
				if (history.at(j)->getMovie() == m) {
					return true;
				}
			}
		}
	}
	return false;
}
