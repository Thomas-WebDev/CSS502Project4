// -------------------------------- Movie.cpp ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the implimentation of the class movie, which
// represents a movie of any genre.
// -----------------------------------------------------------------------------

#include "Movie.h"

Movie::Movie() {
	genre = "";
	stock = 0;
	temp = "";
	title = "";
	directorName = "";
	int month = 0;
	int year = 0;
}

Movie::~Movie() {}

int Movie::getStock() {
	return stock;
}

string Movie::getTitle() {
	return title;
}

string Movie::getDirectorName() {
	return directorName;
}

int Movie::getYear()
{
	return year;
}

void Movie::setStock(int s) {
	stock = s;
}

void Movie::setTitle(string t) {
	title = t;
}

void Movie::setDirectorName(string d) {
	directorName = d;
}

void Movie::setYear(int y) {
	year = y;
}

string Movie::getActorName() {
	return actorName;
}

int Movie::getMonth() {
	return month;
}

void Movie::setActorName(string actor) {
	actorName = actor;
}

void Movie::setMonth(int m) {
	month = m;
}


bool Movie::caseInsensitiveStringCompare(const string & str1, const string & str2) {
	if (str1.size() != str2.size()) {
		return false;
	}
	for (string::const_iterator c1 = str1.begin(), c2 = str2.begin(); c1 != str1.end(); ++c1, ++c2) {
		if (tolower(*c1) != tolower(*c2)) {
			return false;
		}
	}
	return true;
}

