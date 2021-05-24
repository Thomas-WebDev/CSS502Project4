// ---------------------------- MovieFactory.spp -------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the implimentation of the class movie factory,
// which instantiates a movie object of the given genre.
// -----------------------------------------------------------------------------

#include "MovieFactory.h"

Movie* MovieFactory::factory(string g, ifstream& in) {
	string errorS = "";
	string genre = "";
	int stock = -1;
	string temp = "";
	string title = "";
	string directorName = "";
	string actorName = "";
	int month = -1;
	int year = -1;
	if (g == "C,") {
		in >> stock;
		in >> directorName;
		in >> directorName;
		while (directorName.back() != ',') {
			in >> temp;
			directorName += (" " + temp);
		}
		directorName.pop_back();
		temp = "";
		in >> title;
		while (title.back() != ',') {
			in >> temp;
			title += (" " + temp);
		}
		title.pop_back();
		temp = "";
		in >> temp;
		while (!isdigit(temp[0])) {
			actorName += (" " + temp);
			in >> temp;
		}
		actorName.erase(0, 1);
		month = stoi(temp);
		in >> year;
		return (new Classic(stock, directorName, title, actorName, month, year));
	}
	else if (g == "D,") {
		in >> stock;
		in >> directorName;
		in >> directorName;
		while (directorName.back() != ',') {
			in >> temp;
			directorName += (" " + temp);
		}
		directorName.pop_back();
		in >> title;
		while (title.back() != ',') {
			in >> temp;
			title += (" " + temp);
		}
		title.pop_back();
		in >> year;
		return (new Drama(stock, directorName, title, year));
	}
	else if (g == "F,") {
		in >> stock;
		in >> directorName;
		in >> directorName;
		while (directorName.back() != ',') {
			in >> temp;
			directorName += (" " + temp);
		}
		directorName.pop_back();
		temp = "";
		title = "";
		in >> title;
		while (title.back() != ',') {
			in >> temp;
			title += (" " + temp);
		}
		title.pop_back();
		in >> year;
		return (new Comedy(stock, directorName, title, year));
	}
	else {
		getline(in, errorS);
		if (errorS != "" && g != " ") {
			cout << "ERROR IN READING GENRE. The following data will not be entered..." << endl;
			cout << g << errorS << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
		}
	}
	return NULL;
}
