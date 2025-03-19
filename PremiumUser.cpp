#include "PremiumUser.h"
#include <algorithm> 
#include <random>    
using namespace std;
#pragma warning (disable: 4996)

PremiumUser::PremiumUser(const string& username, const vector<string>& playlist) : User(username, playlist) {}; //Constractor, using User constractor

void PremiumUser::mySubscription(){
    cout<<"Premium User"<<endl;
    return;
}

void PremiumUser::playSong(){
    User::playSong();
    return;
}

void PremiumUser::shuffle(){
    random_device rd;
    mt19937 g(rd());
    std::shuffle(playlist.begin(), playlist.end(), g);
    return;
}