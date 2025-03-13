#ifndef __REGULARUSER_H
#define __REGULARUSER_H
#pragma warning (disable: 4996)
#include <iostream>
#include "User.h"
#include <vector>
#include <string>
using namespace std;

class RegularUser: public User
{
public:
    RegularUser(const string& username, const vector <string>& playlist); //Contractor, No need for Destructor because we don't have new field ot want to use polymorphisem for this class.
	virtual void playSong() override; //override check for existence of virtual function with the same name in the base class.
};

#endif //__REGULARUSER_H