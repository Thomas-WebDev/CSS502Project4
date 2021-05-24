// ------------------------------- Classic.cpp ---------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the implimentation of the class classic movie, 
// which represents a classic movie. 
// -----------------------------------------------------------------------------

#include "Classic.h"

Classic::Classic() {
	genre = "Classic";
	actorName = "";
	month = 0;
}

Classic::Classic(int m, int y, string actor) {
	actor.erase(0, 1);
	setActorName(actor);
	setMonth(m);
	setYear(y);
}

Classic::Classic(int s, string director, string t, string actor, int m, int y) {
	genre = "Classic";
	setStock(s);
	setDirectorName(director);
	setTitle(t);
	setActorName(actor);
	setMonth(m);
	setYear(y);
}

Classic::~Classic() {}

string Classic::is() {
	return genre;
}

void Classic::display() {
	cout << is() << " " << getStock() << " " << getDirectorName() << ", " << getTitle() << ", " << getActorName() << " " << getMonth() << ", " << getYear() << endl;
}

void Classic::displayWithoutStock() {
	cout << is() << " " << getDirectorName() << ", " << getTitle() << ", " << getActorName() << " " << getMonth() << ", " << getYear() << endl;
}


//- classics(‘C’) are sorted by Release date, then Major actor
bool Classic::operator==(Movie &classic) {
	if ((getMonth() == classic.getMonth()) && (getYear() == classic.getYear())) {
		return caseInsensitiveStringCompare(getActorName(), classic.getActorName());
	}
	return false;
}

bool Classic::operator>(Movie &classic)
{
	if (getYear() > classic.getYear())
		return true;
	else {
		if (getYear() < classic.getYear())
			return false;	
		else {
			if (getMonth() > classic.getMonth())
				return true;			
			else {
				if (getMonth() < classic.getMonth())
					return false;				
				else {
					if (getActorName() > classic.getActorName())
						return true;
					else
						return false;
				}
			}
		}
	}
}