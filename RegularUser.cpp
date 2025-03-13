#include "RegularUser.h"
using namespace std;
#pragma warning (disable: 4996)

RegularUser::RegularUser(const string& username, const vector <string>& playlist) : User(username, playlist) {} //Constractor

void RegularUser::playSong(){
    cout<<"[Advertisement] Buy Premium for an ad-free experience!"<<endl;
    User::playSong();
}