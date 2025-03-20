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
private:
    bool IsShuffleOn;
    void shuffle();
public:
    PremiumUser(const string& username, const vector<string>& NewPlaylist);
    bool MySubscription() override; //override check for existence of virtual function with the same name in the base class.
    void NextSong() override;
	void PreviousSong() override;
    void SwitchShuffleMode ();
    bool GetShuffleMode();
};

#endif //__PREMIUMUSER_H