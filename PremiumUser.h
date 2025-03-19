#ifndef __PREMIUMUSER_H
#define __PREMIUMUSER_H
#pragma warning (disable: 4996)
#include "User.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class PremiumUser : public User
{
public:
    PremiumUser(const string& username, const vector<string>& playlist);
    virtual void mySubscription() override; //override check for existence of virtual function with the same name in the base class.
    virtual void playSong() override; 
};

#endif //__PREMIUMUSER_H