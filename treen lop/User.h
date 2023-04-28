#pragma once
#include "Book.h"
#include <iostream>

using namespace std;

class User
{
private:
	enum accessibilityType {
		ADMIN,
		MEMBER,
		GUEST
	};
	accessibilityType accessibilityLevel;
public:
	User();
	User(accessibilityType level);
	~User();
	void setAccessLevel(accessibilityType level);
	int getAccessLevel();
	virtual void read(Book &b) = 0;
	Book searchByTitle(string title);
	Book searchBySerial(string serialNumber);
 };

