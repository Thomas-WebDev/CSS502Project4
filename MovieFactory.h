// ------------------------------ MovieFactory.h -------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class movie factory, which
// instantiates a movie object of the given genre 
// -----------------------------------------------------------------------------

#ifndef MOVIEFACTORY_H
#define MOVIEFACTORY_H

#include "Movie.h"
#include "Classic.h"
#include "Drama.h"
#include "Comedy.h"
#include <iostream>
#include <fstream>
#include <string>

class MovieFactory {
public:
	// ---------------------------- factory(char type) -----------------------------
	// Description: creates a movie object of a specific genre depending on type 
	// argument. Returns a pointer to a movie object. 
	// -----------------------------------------------------------------------------
	Movie* factory(string, ifstream&);
};

#endif
