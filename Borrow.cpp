#include "Borrow.h"

Borrow::Borrow(Movie *m) {
	transactionType = "Borrow";
	movie = m;
	doTransaction();
}

Borrow::~Borrow() {}

void Borrow::display() {
	cout << "      " << transactionType << " ";
	movie->displayWithoutStock();
}

void Borrow::doTransaction() {
	if (movie->getStock() > 0) {
		movie->setStock(movie->getStock() - 1);
	}
	else {
		cout << "ERROR: Failed to borrow movie. Insufficient stock" << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		transactionType = "Borrow - Failed. Insufficientstock";
	}
}

Movie * Borrow::getMovie() {
	return movie;
}

string Borrow::getType() {
	return transactionType;
}
