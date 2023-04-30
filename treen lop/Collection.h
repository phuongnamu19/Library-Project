#pragma once
#include <iostream>
#include <vector>
#include "Book.h"
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
    vector<Book*> getBookList();
    vector<User*> getUserList();
    void addBook(Book* book, User* user);

	bool operator==(const Collection& other) const {
        return this->ID == other.ID && this->name == other.name;
    }
};