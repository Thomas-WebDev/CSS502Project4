// ---------------------------------Movie.h ----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this program contains the definition of the class movie, which
// represents a movie of any genre.
// -----------------------------------------------------------------------------

#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Movie {
public:
	// ------------------------------- Movie() -----------------------------------
	// Description: constructor of a movie object.
	// ---------------------------------------------------------------------------
	Movie();
	// ------------------------------ ~Movie() -----------------------------------
	// Description: destructor of a movie object.
	// ---------------------------------------------------------------------------
	~Movie();
	// ------------------------------ is() ---------------------------------------
	// Description: Returns a string containing the genre 
	// ---------------------------------------------------------------------------
	virtual string is() = 0;
	// ------------------------ displayWithoutStock() ----------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	virtual void displayWithoutStock() = 0;
	// ---------------------------- displayData() --------------------------------
	// Description: displays the data the movie.
	// ---------------------------------------------------------------------------
	virtual void display() = 0;
	// ----------------------------- getStock() ----------------------------------
	// Description: returns the stock of a given movie.
	// ---------------------------------------------------------------------------
	int getStock();
	// ------------------------------ getTitle() ---------------------------------
	// Description: returns the title of the movie.
	// ---------------------------------------------------------------------------
	string getTitle();
	// --------------------------- getDirectorName() -----------------------------
	// Description: returns the director of the movie.
	// ---------------------------------------------------------------------------
	string getDirectorName();
	// ------------------------------ getYear() ----------------------------------
	// Description: returns the year of release of the movie.
	// ---------------------------------------------------------------------------
	int getYear();
	// ----------------------------- getStock() ----------------------------------
	// Description: returns the stock of a given movie.
	// ---------------------------------------------------------------------------
	void setStock(int);
	// ---------------------- setYear(int yearOfRelease) -------------------------
	// Description: sets the year of release of the movie.
	// ---------------------------------------------------------------------------
	void setTitle(string);
	// ---------------------- setDirectorName(string director) ------------------
	// Description: sets the director of the movie.
	// ---------------------------------------------------------------------------
	void setDirectorName(string);
	// --------------------------- setTitle(string title) ------------------------
	// Description: sets the title of the movie.
	// ---------------------------------------------------------------------------
	void setYear(int);
	// ------------------------ getActorName(string director) --------------------
	// Description: sets the director of the movie.
	// ---------------------------------------------------------------------------
	string getActorName();
	// ------------------------------ getMonth() ---------------------------------
	// Description: returns the month of a given movie.
	// ---------------------------------------------------------------------------
	int getMonth();
	// ---------------------------- setActorName() -------------------------------
	// Description: sets the actor of the movie.
	// ---------------------------------------------------------------------------
	void setActorName(string);
	// ---------------------------- setMonth(int) --------------------------------
	// Description: sets the month of the movie.
	// ---------------------------------------------------------------------------
	void setMonth(int);
	// -------------------------- operator==(Movie &) ----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the same
	// as that of this Movie. Else false
	// ---------------------------------------------------------------------------
	virtual bool operator==(Movie &) = 0;
	// --------------------------- operator>(Movie &) ----------------------------
	// Description: Returns true if the passed Movie sorting criteria are the
	// greater than as that of this Movie. Else false
	// ---------------------------------------------------------------------------
	virtual bool operator>(Movie &) = 0;
	// ----- caseInsensitiveStringCompare(const string&, const string&) ----------
	// Description: Returns true if the teo strings are equal reguardless of case.
	// Else false.
	// ---------------------------------------------------------------------------
	bool caseInsensitiveStringCompare(const string&, const string&);
protected:
	string genre;
	int stock;
	string temp;
	string title;
	string directorName;
	int year;
	string actorName;
	int month;
};