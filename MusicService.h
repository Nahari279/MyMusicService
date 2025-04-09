#ifndef __MUSICSERVICE_H
#define __MUSICSERVICE_H
#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
#include "PremiumUser.h"

using namespace std;


class MusicService
{
public:
    string MusicServiceName;
    vector <User*> users;

    MusicService(const string& MusicServiceName); //Constractor
    ~MusicService(); //Destructor - Must - we have field that contain pointers.

    void AddUser(const string& username, const vector <string>& NewPlaylist, const bool& IsPremium);
    void ShowUser(int UserNumber);
    void ShowAllUsers();
    void ShuffleOn(int UserNumber);
    void NextSong(int UserNumber);
};

#endif //__MUSICSERVICE_H