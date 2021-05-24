// --------------------------- BuisnessLogic.cpp -------------------------------
// Author: Kevin Thomas Kehoe 
// Course: CSS 502
// Creation Date: 02/27/2018
// Date of Last Modification: 03/13/2018
// -----------------------------------------------------------------------------
// Purpose: this file contains the implimentation of the class BuisnessLogic,
// which instantiates a BuisnessLogic object and initializes instances of all 
// other necessary classes.
// -----------------------------------------------------------------------------

#include "BuisnessLogic.h"

BuisnessLogic::BuisnessLogic() {}

BuisnessLogic::~BuisnessLogic() {}

void BuisnessLogic::testSystem() {
	string transactionType = "";
	string customerID = "";
	string temp = "";
	ifstream in("data4commands.txt");
	if (!in) {
		cout << "Command test file could not be opened." << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
		return;
	}
	for (;;) {
		if (in.eof())
			break;
		else {
			transactionType = "";
			customerID = "";
			temp = "";
			in >> transactionType;

			if (transactionType == "I") {
				stock.displayStock();
			}
			else if (transactionType == "H" || transactionType == "B" || transactionType == "R") {
				in >> customerID;
				if (clients.getCustomer(customerID) != NULL) {
					if (transactionType == "B" || transactionType == "R")
						customerTransaction(transactionType, customerID, in);
					else
						clients.getCustomer(customerID)->displayHistory();
				}
				else {
					getline(in, temp);
					cout << "ERROR: Unable to locate customer. The following commands will not be executed..." << endl;
					cout << "       " << transactionType << " " << customerID << temp << endl;
					cout << "-------------------------------------------------------------------------------------" << endl;
				}
			}
			else {
				getline(in, temp);
				if (temp != "") {
					cout << "ERROR: Invalid Command. The following information cannot be processed..." << endl;
					cout << "       " << transactionType << temp << endl;
					cout << "-------------------------------------------------------------------------------------" << endl;
				}
			}
		}
	}
}

void BuisnessLogic::customerTransaction(string transactionType, string customerID, ifstream & in) {
	string genre = "";
	string format = "";
	int month = -1;
	int year = -1;
	string actor = "";
	string director = "";
	string temp = "";
	string title = "";
	char tempC;

	in >> format;
	in >> genre;
	if (genre == "C") {
		in >> month;
		in >> year;
		in.get(tempC);
		while (tempC != '\n') {
			if (tempC != '\r')
				actor += tempC;
			in.get(tempC);
		}
		actor.erase(0, 1);
		if (stock.getClassic(month, year, actor) != NULL)
			TransactionFactory().factory(transactionType, clients.getCustomer(customerID), stock.getClassic(month, year, actor));
		else {
			cout << "ERROR: The transaction cannot be processed. Unable to locate movie..." << endl << "       CLASSIC: " << month << ", " << year << ", " << actor << endl;			
			cout << "-------------------------------------------------------------------------------------" << endl;
		}
	}
	else if (genre == "D") {
		in >> director;
		while (director.back() != ',') {
			in >> temp;
			director += (" " + temp);
		}
		director.pop_back();
		temp = "";
		in >> title;
		while (title.back() != ',') {
			in >> temp;
			title += (" " + temp);
		}
		title.pop_back();
		if (stock.getDrama(director, title) != NULL)
			TransactionFactory().factory(transactionType, clients.getCustomer(customerID), stock.getDrama(director, title));
		else {
			cout << "ERROR: The transaction cannot be processed. Unable to locate movie..." << endl << "       DRAMA: " << director << ", " << title << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
		}
	}
	else if (genre == "F") {
		in >> title;
		while (title.back() != ',') {
			in >> temp;
			title += (" " + temp);
		}
		title.pop_back();
		in >> year;
		if (stock.getComedy(title, year) != NULL)
			TransactionFactory().factory(transactionType, clients.getCustomer(customerID), stock.getComedy(title, year));
		else {
			cout << "ERROR: The transaction cannot be processed. Unable to locate movie.." << endl << "       COMEDY: " << title << ", " << year << endl;
			cout << "-------------------------------------------------------------------------------------" << endl;
		}
	}
	else {
		getline(in, temp);
		cout << "ERROR: Invalid genre. The following commands will not be executed..." << endl << "       " << genre << temp << endl;
		cout << "-------------------------------------------------------------------------------------" << endl;
	}
}
