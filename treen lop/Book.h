#pragma once
#include <iostream>
#include <string>
using namespace std;

class Book {
private: 
	string serialNumber;
	string title;
	string author;
	int pageCount;
	int freePage;
	int category;
	bool visibilityStatus;
	bool availabilityStatus;

public:
	Book();
	Book(string, string, string, int, int, int , bool, bool);
	string getSerialNumber();
	string getTitle();
	string getAuthor();
	int getPageCount();
	int getFreePage();
	int getCategorie();
	bool getVisibilityStatus();
	bool getAvailabilityStatus();
	
	void setSerialNumber(string);
	void setTitle(string);
	void setAuthor(string);
	void setPageCount(int);
	void setFreePage(int);
	void setCategory(int);
	void setVisibilityStatus(bool);
	void setAvailabilityStatus(bool);
};