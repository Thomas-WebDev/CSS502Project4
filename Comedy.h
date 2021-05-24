// -------------------------------- Comedy.h ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class comedy movie, 
// which represents a comedy movie. 
// -----------------------------------------------------------------------------

#ifndef COMEDY_H
#define COMEDY_H

#include "Movie.h"

class Comedy : public Movie {
public:
	// ------------------------------ Comedy() -----------------------------------
	// Description: constructor of a comedy movie object. 
	// ---------------------------------------------------------------------------
	Comedy();
	// ------------------------ Comedy(string, int) ------------------------------
	// Description: constructor of a comedy movie object. 
	// ---------------------------------------------------------------------------
	Comedy(string, int);
	// ------------------ Comedy(string, string, int, string, int) ---------------
	// Description: constructor of a comedy movie object with parameters. 
	// ---------------------------------------------------------------------------
	Comedy(int, string, string, int);
	// ------------------------------ ~Comedy() ----------------------------------
	// Description: destructor of a comedy  object. 
	// ---------------------------------------------------------------------------
	~Comedy();
	// ------------------------------ is() ---------------------------------------
	// Description: Returns a string containing the genre 
	// ---------------------------------------------------------------------------
	virtual string is();
	// ------------------------------ display() ----------------------------------
	// Description: displays the data the movie. 
	// ---------------------------------------------------------------------------
	virtual void display();
	// -------------------------- displayWithoutStock() --------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	void displayWithoutStock();
	// -------------------------- operator==(Movie &) ----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the same
	// as that of this Movie. Else false
	// ---------------------------------------------------------------------------
	virtual bool operator==(Movie &);
	// --------------------------- operator>(Movie &) ----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the
	// greater than as that of this Movie. Else false
	// ---------------------------------------------------------------------------
	virtual bool operator>(Movie &);
};

#endif