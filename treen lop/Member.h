#pragma once
#include "RegisteredUser.h"
#include "Collection.h"
#include <ctime>

class Member : public RegisteredUser {
private:
    int startYear;
    int endYear;
    int borrowBook;
public:
    Member(string userName, int ID, string password, string phoneNumber, string fullName);
    Member(string userName, int ID, string password, string phoneNumber, string fullName, int startYear, int endYear, int borrowBook);
    void borrow();
    void returnBook();
    void subscribe();
    void unsubscribe();
    void displayCollectionList(bool onlySubscribed);
    void displayBorrowList();
};
