// ------------------------------ Comedy.cpp ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the implimentation of the class comedy movie, 
// which represents a comedy movie. 
// -----------------------------------------------------------------------------

#include "Comedy.h"

Comedy::Comedy() {
	genre = "Comedy";
}

Comedy::Comedy(string t, int y) {
	setTitle(t);
	setYear(y);
}

Comedy::Comedy(int s, string director, string t, int y) {
	genre = "Comedy";
	setStock(s);
	setDirectorName(director);
	setTitle(t);
	setYear(y);
}


Comedy::~Comedy() {}

string Comedy::is() {
	return genre;
}

void Comedy::display() {
	cout << is() << " " << getStock() << " " << getDirectorName() << ", " << getTitle() << " " << getYear() << endl;
}

//-comedy movies(‘F’) sorted by Title, then Year it released

void Comedy::displayWithoutStock() {
	cout << is() << " " << getDirectorName() << ", " << getTitle() << " " << getYear() << endl;
}

bool Comedy::operator==(Movie &comedy) {
	if (caseInsensitiveStringCompare(getTitle(), comedy.getTitle())) {
		if (getYear() == comedy.getYear()) {
			return true;
		}
		else
			return false;
	}
	return false;
}

bool Comedy::operator>(Movie &comedy)
{
	if (getTitle() > comedy.getTitle()) {
		return true;
	}
	else {
		if (caseInsensitiveStringCompare(getTitle(), comedy.getTitle())) {
			if (getYear() > comedy.getYear()) {
				return true;
			}
			else
				return false;
		}
		else
			return false;
	}
}
