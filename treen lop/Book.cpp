#include <iostream>
#include <string>
#include "Book.h"
using namespace std;

Book::Book() : serialNumber(""), title(""), author(""), pageCount(0), freePage(0), category(0),visibilityStatus(false), availabilityStatus(false)
{
}

Book::Book(string sn, string t, string a, int pc, int fp, int c, bool vs, bool as)
    : serialNumber(sn), title(t), author(a), pageCount(pc), freePage(fp), category(c),
    visibilityStatus(vs), availabilityStatus(as) {}

string Book::getSerialNumber(){ return serialNumber; }
string Book::getTitle(){ return title; }
string Book::getAuthor() { return author; }
int Book::getPageCount(){ return pageCount; }
int Book::getFreePage(){ return freePage; }
int Book::getCategorie(){ return category; }
bool Book::getVisibilityStatus(){ return visibilityStatus; }
bool Book::getAvailabilityStatus(){ return availabilityStatus; }

void Book::setSerialNumber(string sn) { serialNumber = sn; }
void Book::setTitle(string t) { title = t; }
void Book::setAuthor(string a) { author = a; }
void Book::setPageCount(int pc) { pageCount = pc; }
void Book::setFreePage(int fp) { freePage = fp; }
void Book::setCategory(int c) { category = c; }
void Book::setVisibilityStatus(bool vs) { visibilityStatus = vs; }
void Book::setAvailabilityStatus(bool as) { availabilityStatus = as; }