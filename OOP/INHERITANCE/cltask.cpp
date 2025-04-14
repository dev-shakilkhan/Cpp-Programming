#include<iostream>
#include<string>

using namespace std;

class Clan_A{
    public:
    void Show(){
        cout<<"This is Show function";
    }
};

class Clan_B : public Clan_A{

};

class Clan_C: public Clan_A{

};

class Clan_D: public Clan_B, public Clan_C{

};