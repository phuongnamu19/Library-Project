#include "Collection.h"

Collection::Collection()
{
	ID = 0;
	name = "";
	bookList.clear();
	subcribeUser.clear();
}

Collection::Collection(int id, string name)
{
	ID = id;
	this->name = name;
	bookList.clear();
	subcribeUser.clear();
}

Collection::~Collection()
{
}

void Collection::setId(int id)
{
	ID = id;
}

void Collection::setName(string name)
{
	this->name = name;
}

void Collection::addBook(Book* book)
{
	bookList.push_back(book);
}

void Collection::addUser(User* user)
{
	subcribeUser.push_back(user);
}

int Collection::getId()
{
	return ID;
}

string Collection::getName()
{
	return name;
}

Book* Collection::getBookList()
{
	vector<Book*> books;
	for (int i = 0; i < bookList.size(); i++) {
		books.push_back(bookList[i]);
	}
	return books;
}

User* Collection::getUserList()
{
	vector<User*> users;
	for (int i = 0; i < subcribeUser.size()i++) {
		users.push_back(subcribeUser[i]);
	}
	return users;
}

void Collection::addBook(Book* book, User* user)
{
	bookList.push_back(book);
	subcribeUser.push_back(user);
}