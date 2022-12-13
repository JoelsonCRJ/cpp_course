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
    Player(/* args */);
    ~Player();
    void set_name(string choosenName);
    void talk (string text_to_say);
    bool is_Dead();
};

Player::Player(/* args */)
{
}

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
    return 0;
}