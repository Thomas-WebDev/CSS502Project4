// ------------------------------- Stock.cpp -----------------------------------
// Author: Kevin Thomas Kehoe
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the implimentation of the class stock. This class
// represents the objects in the store. 
// -----------------------------------------------------------------------------

#include "Stock.h"

Stock::Stock() {
	buildStock();
}

Stock::~Stock() {}

//Classic
Movie * Stock::getClassic(int month, int year, string actor) {
	return inventoryC.retrieve(month, year, actor);
}

//Comedy
Movie * Stock::getComedy(string title, int year) {
	return inventoryF.retrieve(title, year);
}

//Drama
Movie * Stock::getDrama(string director, string title) {
	return inventoryD.retrieve(director, title);
}

void Stock::buildStock() {
	string errorS = "";
	ifstream infile1("data4movies.txt");
	if (!infile1) {
		cout << "File could not be opened." << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		return;
	}
	string genre;
	int c = 0;
	int i = 0;
	for (;;) {
		if (infile1.eof())
			break;
		else {
			genre = "";
			infile1 >> genre;
			if (genre == "C,")
				inventoryC.insert(MovieFactory().factory(genre, infile1));
			else if (genre == "F,")
				inventoryF.insert(MovieFactory().factory(genre, infile1));
			else if (genre == "D,")
				inventoryD.insert(MovieFactory().factory(genre, infile1));
			else {
				getline(infile1, errorS);
				if (errorS != "" && genre != "") {
					cout << "ERROR IN READING GENRE. The following data will not be entered..." << endl;
					cout << genre << errorS << endl;
					cout << "-------------------------------------------------------------------------------------" << endl;
				}
			}
		}
	}
}

void Stock::displayStock() {
	cout << "COMPLETE INVENTORY OF MOVIES..." << endl;
	displayComedies();
	displayDrama();
	displayClassics();
	cout << "-------------------------------------------------------------------------------------" << endl;
}

void Stock::displayClassics() {
	inventoryC.inorderTraversal();
}

void Stock::displayComedies() {
	inventoryF.inorderTraversal();
}

void Stock::displayDrama() {
	inventoryD.inorderTraversal();
}
