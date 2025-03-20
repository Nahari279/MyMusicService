#include "MusicService.h"
using namespace std;
#pragma warning (disable: 4996)

MusicService::MusicService(const string& MusicServiceName) : MusicServiceName(MusicServiceName) {};

MusicService::~MusicService(){
    for (User* user : users)
    {
        delete user; //Delete the object that the pointer "user" is pointing on. but the pointer "user" himslef, REMAIN in the vector "users"!
    }
    users.clear(); //Delete the pointer himself.
}

void MusicService::AddUser(const string& username, const vector <string>& NewPlaylist, const bool& IsPremium) {
    User* NewUser = nullptr;
    if (IsPremium)
    {
        NewUser = new PremiumUser(username, NewPlaylist);
        users.push_back(NewUser);
    }
    else
    {
        NewUser = new RegularUser(username, NewPlaylist);
        users.push_back(NewUser);
    }
    return;
}

void MusicService::ShowUser(int UserNumber){
    for (User* user : users)
    {
        cout<<user;
    }
    return;
}