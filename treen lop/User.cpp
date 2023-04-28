#include "User.h"

User::User()
{
	accessibilityLevel = GUEST;
}

User::User(accessibilityType level)
{
	accessibilityLevel = level;
}

User::~User()
{
}

void User::setAccessLevel(accessibilityType level)
{
	accessibilityLevel = level;
}

int User::getAccessLevel()
{
	return accessibilityLevel;
}

Book User::searchByTitle(string title)
{
	cout << "User::searchByTitle successfully" << endl;
}

Book User::searchBySerial(string serialNumber)
{
	cout << "User::searchBySeriala successfully" << endl;
}
