// --------------------------------- Stock.h -----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the definition of the class stock. This 
// class represents the objects in the store. 
// -----------------------------------------------------------------------------

#ifndef STOCK_H
#define STOCK_H

#include <iostream>
#include <fstream>
#include <string>
#include "MovieFactory.h"
#include "Movie.h"
#include "BinaryTree.h"

using namespace std;

class Stock {
public:
	// ------------------------------ Stock() --------------------------------------
	// Description: constructor of a stock object. No movies in stock 
	// -----------------------------------------------------------------------------
	Stock();
	// ------------------------------ ~Stock() -------------------------------------
	// Description: destructor of a stock object. 
	// -----------------------------------------------------------------------------
	~Stock();
	// ---------------------- getClassic(int, int, string) -------------------------
	// Description: returns a pointer to the movie coresponding to the passed search 
	// parameters.
	// -----------------------------------------------------------------------------
	Movie* getClassic(int, int, string);
	// -------------------------- getComedy(string, int) ---------------------------
	// Description: returns a pointer to the movie coresponding to the passed search 
	// parameters.
	// -----------------------------------------------------------------------------
	Movie* getComedy(string, int);
	// -------------------------- getDrama(string, string) -------------------------
	// Description: returns a pointer to the movie coresponding to the passed search 
	// parameters.
	// -----------------------------------------------------------------------------
	Movie* getDrama(string, string);
	// ------------------------------- buildStock() --------------------------------
	// Description: Fills the trees contained ins stock from text file
	// -----------------------------------------------------------------------------
	void buildStock();
	// ------------------------------ displayStock() -------------------------------
	// Description: Outputs all movies in the inventory
	// -----------------------------------------------------------------------------
	void displayStock();
	// ----------------------------- displayClassics() -----------------------------
	// Description: Outputs all classics in the inventory
	// -----------------------------------------------------------------------------
	void displayClassics();
	// ----------------------------- displayComedies() -----------------------------
	// Description: Outputs all comedies in the inventory
	// -----------------------------------------------------------------------------
	void displayComedies();
	// ------------------------------ displayDrama() -------------------------------
	// Description: Outputs all dramas in the inventory
	// -----------------------------------------------------------------------------
	void displayDrama();
private:
	BinaryTree inventoryC; // 
	BinaryTree inventoryF; // 
	BinaryTree inventoryD; // 
};

#endif