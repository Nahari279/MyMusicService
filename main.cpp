#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
using namespace std;

int main() {
    vector <string> playlist = {"Song A", "Song B", "Song C"};
    RegularUser MyUser("Maor", playlist);
    MyUser.playSong();
    MyUser.playSong();
    MyUser.playSong();
    MyUser.playSong();
    return 0;
}