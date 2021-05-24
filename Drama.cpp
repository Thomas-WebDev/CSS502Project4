// ------------------------------- Drama.cpp ----------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the implimentation of the class drama movie, 
// which represents a drama movie. 
// -----------------------------------------------------------------------------

#include "Drama.h"

Drama::Drama() {
	genre = "Drama";
}

Drama::Drama(string director, string t) {
	setDirectorName(director);
	setTitle(t);
}

Drama::Drama(int s, string director, string t, int y) {
	genre = "Drama";
	setStock(s);
	setDirectorName(director);
	setTitle(t);
	setYear(y);
}

Drama::~Drama() {}

string Drama::is() {
	return genre;
}

void Drama::display() {
	cout << is() << " " << getStock() << " " << getDirectorName() << ", " << getTitle() << " " << getYear() << endl;
}

void Drama::displayWithoutStock() {
	cout << is() << " " << getDirectorName() << ", " << getTitle() << " " << getYear() << endl;
}


//- dramas(‘D’) are sorted by Director, then Title

bool Drama::operator==(Movie &drama) {
	if (caseInsensitiveStringCompare(getDirectorName(), drama.getDirectorName())) {
		if (caseInsensitiveStringCompare(getTitle(), drama.getTitle()))
			return true;
		else 
			return false;
	}
	return false;
}

bool Drama::operator>(Movie &drama) {
	if (getDirectorName() > drama.getDirectorName())
		return true;
	else {
		if (getDirectorName() == drama.getDirectorName()) {
			if (getTitle() > drama.getTitle())
				return true;
			else
				return false;
		}
		else
			return false;
	}
}
