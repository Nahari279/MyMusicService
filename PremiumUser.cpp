#include "PremiumUser.h"
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