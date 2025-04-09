#include "RegularUser.h"
using namespace std;
#pragma warning (disable: 4996)

RegularUser::RegularUser(const string& username, const vector <string>& NewPlaylist) : User(username, NewPlaylist) {} //Constractor, using User constractor

bool RegularUser::MySubscription(){
    cout<<"Free user"<<endl;
    return false;
}

void RegularUser::NextSong(){
    cout<<"[Advertisement] Buy Premium for an ad-free experience!"<<endl;
    User::NextSong();
    return;
}

void RegularUser::PreviousSong(){
    cout<<"[Advertisement] Buy Premium for an ad-free experience!"<<endl;
    User::PreviousSong();
    return;
}