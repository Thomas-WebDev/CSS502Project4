// ------------------------------- Classic.h -----------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class classic movie, 
// which represents a classic movie. 
// -----------------------------------------------------------------------------

#ifndef CLASSIC_H
#define CLASSIC_H

#include "Movie.h"
class Classic : public Movie
{
public:
	// -------------------------------Classic()--------------------------------------
	// Description: constructor of a classic movie object. 
	// -----------------------------------------------------------------------------
	Classic();
	// -Classic(string, string, int, string, int, string, int)-
	// Description: constructor of a classic movie object with parameters. 
	// -----------------------------------------------------------------------------
	Classic(int, int, string);
	// -Classic(string, string, int, string, int, string, int)-
	// Description: constructor of a classic movie object with parameters. 
	// -----------------------------------------------------------------------------
	Classic(int, string, string, string, int, int);
	// -------------------------------~Classic()--------------------------------------
	// Description: destructor of a classic object. 
	// -----------------------------------------------------------------------------
	~Classic();
	// ------------------------------ is() ---------------------------------------
	// Description: Returns a string containing the genre 
	// ---------------------------------------------------------------------------
	string is();
	// ---------------------------- displayData() --------------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	void display();
	// ------------------------ displayWithoutStock() ----------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	void displayWithoutStock();
	// -------------------------- operator==(Movie &) ----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the same
	// as that of this Movie. Else false
	// ---------------------------------------------------------------------------
	bool operator==(Movie &);
	// --------------------------- operator>(Movie &) ----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the
	// greater than as that of this Movie. Else false
	// ---------------------------------------------------------------------------
	virtual bool operator>(Movie &);
};

#endif