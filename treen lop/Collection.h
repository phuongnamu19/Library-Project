#pragma once
#include <iostream>
#include <vector>
#include "Book"
#include "User.h"

using namespace std;

class Collection
{
private:
	int ID;
	string name;
	vector<Book*> bookList;
	vector<User*> subcribeUser;
public:
	Collection();
	Collection(int id, string name);
	~Collection();
	void setId(int id);
	void setName(string name);
	void addBook(Book* book);
	void addUser(User* user);
	int getId();
	string getName();
	Book* getBookList();
	User* getUserList();
	void addBook(Book* book, User* user);
};

