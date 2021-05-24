// ---------------------------------Drama.h ----------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class drama movie, which 
// represents a drama movie. 
// -----------------------------------------------------------------------------

#ifndef DRAMA_H
#define DRAMA_H

#include "Movie.h"

class Drama : public Movie {
public:
	// -------------------------------Drama()-------------------------------------
	// Description: constructor of a drama movie object. 
	// ---------------------------------------------------------------------------
	Drama();
	// --Drama(string title, string director, int year, string genre, int stock)--
	// Description: constructor of a drama movie object with parameters. 
	// ---------------------------------------------------------------------------
	Drama(string, string);
	// --Drama(string title, string director, int year, string genre, int stock)--
	// Description: constructor of a drama movie object with parameters. 
	// ---------------------------------------------------------------------------
	Drama(int, string, string, int);
	// -------------------------------~Drama()------------------------------------
	// Description: destructor of a drama object. 
	// ---------------------------------------------------------------------------
	~Drama();
	// ------------------------------ is() ---------------------------------------
	// Description: Returns a string containing the genre 
	// ---------------------------------------------------------------------------
	virtual string is();
	// ---------------------------- displayData() --------------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	virtual void display();
	// ------------------------ displayWithoutStock() ----------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	 void displayWithoutStock();
	 // -------------------------- operator==(Movie &) ----------------------------
	 // Description: Returns true if the passed Movie sorting criteria are the same
	 // as that of this Movie. Else false
	 // ---------------------------------------------------------------------------
	virtual bool operator==(Movie &);
	// --------------------------- operator>(Movie &) -----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the
	// greater than as that of this Movie. Else false
	// ----------------------------------------------------------------------------
	virtual bool operator>(Movie &);
};

#endif