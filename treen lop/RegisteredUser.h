#pragma once
#include "User.h"
class RegisteredUser : public User
{
private:
	int id;
	string username, password, phone, fullName;
	static int userCount;
public:
	RegisteredUser();
	RegisteredUser(int id, string username, string password, string phone, string fullName);
	~RegisteredUser();
	void setUserName(string username);
	void setPass(string password);
	void setPhone(string phone);
	void setFullName(string fullName);
	void setID(int id);
	int getID();
	string getUserName();
	string getPass();
	string getPhone();
	string getFullName();
	void read(Book &b);
	void logIn(string username, string password);
	void logOut();
};

