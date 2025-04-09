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
    UserNumber-=1;
    try
    {
        cout<<UserNumber+1<<endl;
        cout<<users.at(UserNumber);
    }
    catch (const out_of_range& e)
    {
        cout << "Invalid user number!" << endl;
    }
    // users.at(UserNumber) checks bounds and throws if UserNumber is invalid. (safer then users[UserNumber])
    // Using try-catch to handle potential out_of_range exception thrown by users.at(UserNumber).
    // This allows us to safely detect and respond to invalid index access without crashing the program.

    return;
}

void MusicService::ShowAllUsers(){
    for(int i=0; i<users.size(); i++)
    {
        MusicService::ShowUser(i+1);
        cout<<endl;
    }
    return;
}

void MusicService::ShuffleOn(int UserNumber){
    UserNumber-=1;
    try
    {
        PremiumUser* prim = dynamic_cast<PremiumUser*>(users.at(UserNumber)); 
        // We use dynamic_cast to safely convert a base class pointer (User*) 
        // to a derived class pointer (PremiumUser*).
        // In this case, 'users.at(UserNumber)' is declared as a User* but ~actually~ points to a PremiumUser object.
        // Since SwitchShuffleMode() is defined only in PremiumUser, we can't access it directly through 'users.at(UserNumber)'.
        // dynamic_cast checks at runtime whether 'users.at(UserNumber)' really points to a PremiumUser object.
        // If the cast is valid, it returns a non-null pointer, allowing us to safely call PremiumUser-specific methods.
        // If not, it returns nullptr, preventing unsafe access and potential crashes.
        // This is important when working with polymorphism, where we might store different types 
        // (e.g., PremiumUser, RegularUser) in the same container (like vector<User*>).
        // Unlike static_cast, which assumes the cast is valid and doesn't check at runtime,
        // dynamic_cast adds a layer of safety by verifying the actual object type before casting.
        // This makes it a much safer choice when the object's exact type isn't guaranteed.
        if (prim)
        {
            prim->SwitchShuffleMode();
            return;
        }
        else
        {
            cout<<"Upgrade to Premium for the Shuffle experience!"<<endl;
        }
    }
    catch(const out_of_range& e)
    {
        cout << "Invalid user number!" << endl;
    }
}

void MusicService::NextSong(int UserNumber){
    UserNumber-=1;
    try
    {
        PremiumUser* prim = dynamic_cast<PremiumUser*>(users.at(UserNumber));
        if (prim)
        {
            prim->NextSong();
            MusicService::ShowUser(UserNumber);
            return;
        }
        else
        {
            RegularUser* reg = dynamic_cast<RegularUser*>(users.at(UserNumber));
            if(reg)
            {
                reg->NextSong();
                MusicService::ShowUser(UserNumber);
            }
            return;
        }
    }
    catch(const out_of_range& e)
    {
        cout << "Invalid user number!" << endl;
    }
    
}