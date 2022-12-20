#include <iostream>
#include<string>
using namespace std;

class Player
{
private:
    string name;
    int health;
    int xp;
public:
    // Player(/* args */);
    Player(std::string name_val, int health_val, int xp_val);
    // Player(std::string name_val);
    ~Player();
    void set_name(string choosenName);
    void talk (string text_to_say);
    bool is_Dead();
};

// Player::Player(/* args */)
// :Player{"None",0,0}
// {
//     cout<<"no-args constructor\n";
// }

Player::Player(std::string name_val="None", int health_val=0, int xp_val=0)
: name{name_val},health{health_val},xp{xp_val}
{
    cout<<"three args constructor\n";

}

// Player::Player (std::string name_val)
// : Player{name_val,0,0}
// {
//     cout<<"one arg constructor\n";

// }
Player::~Player()
{
}

void Player::set_name(string choosenName)
{
    name = choosenName;
}

void Player::talk(string text_to_say)
{
    cout<<name<<" says "<<text_to_say<<endl;
}

int main ()
{
    Player Joaquin;
    Joaquin.set_name("Joao");
    Joaquin.talk("ola mundo");
    Player Joelson("Joelson");
    Player Frank("Frank",4);
    return 0;
}