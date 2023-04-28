#pragma once
#include "User.h"
class Guest : public User
{
private:
	int id;
public:
	Guest();
	Guest(int id);
	void registering();
	//void read(Book &b);
	~Guest();
};

