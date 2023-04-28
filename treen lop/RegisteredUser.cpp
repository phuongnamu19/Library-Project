#include "RegisteredUser.h"

RegisteredUser::RegisteredUser()
{
	id = 0;
	username = "";
	password = "";
	phone = "";
	fullName = "";
	userCount++;
}

RegisteredUser::RegisteredUser(int id, string username, string password, string phone, string fullName)
{
	this->id = id;
	this->username = username;
	this->password = password;
	this->phone = phone;
	this->fullName = fullName;
	userCount++;
}

RegisteredUser::~RegisteredUser()
{
}

void RegisteredUser::setUserName(string username)
{
	this->username = username;
}

void RegisteredUser::setPass(string password)
{
	this->password = password;
}

void RegisteredUser::setPhone(string phone)
{
	this->phone = phone;
}

void RegisteredUser::setFullName(string fullName)
{
	this->fullName = fullName;
}

void RegisteredUser::setID(int id)
{
	this->id = id;
}

int RegisteredUser::getID()
{
	return id;
}

string RegisteredUser::getUserName()
{
	return username;
}

string RegisteredUser::getPass()
{
	return password;
}

string RegisteredUser::getPhone()
{
	return phone;
}

string RegisteredUser::getFullName()
{
	return fullName;
}

void RegisteredUser::read(Book &b)
{
	cout << "RegisteredUSer::read successfully" << endl;
}

void RegisteredUser::logIn(string username, string password)
{
	cout << "User::logIn successfully" << endl;
}

void RegisteredUser::logOut()
{
	cout << "User::logOut sucessfully" << endl;
}
