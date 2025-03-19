#pragma warning (disable: 4996)
#include <iostream>
#include <vector>
#include <string>
#include "User.h"
#include "RegularUser.h"
#include "PremiumUser.h"
using namespace std;

int main() {
    vector <string> playlist = {"Song A", "Song B", "Song C"};
    RegularUser reg("Maor", playlist);
    PremiumUser prim("Maor", playlist);
    reg.playSong();
    reg.playSong();
    reg.playSong();
    reg.playSong();
    prim.mySubscription();
    prim.playSong();
    return 0;
}