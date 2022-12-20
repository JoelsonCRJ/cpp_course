//copy constructor
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
    Player(std::string name_val, int health_val, int xp_val);
    Player(const Player &source);
    //destructor
    ~Player();
    string get_name();
    int get_health();
    int get_xp();
    void set_name(string choosenName);
    void talk (string text_to_say);
    bool is_Dead();
};

string Player::get_name()
{
    return name;
}
int Player::get_health()
{
    return health;
}

int Player::get_xp()
{
    return xp;
}

Player::Player(const Player &source) 
:Player {source.name,source.health,source.xp}
//  name{source.name},
//   health {source.health},
//   xp{source.xp}
{
    cout<<"copy constructor - made copy of: "<<source.name<<endl;
}
Player::Player(std::string name_val="joelson", int health_val=0, int xp_val=0)
: name{name_val},health{health_val},xp{xp_val}
{
    cout<<"three args constructor for: "+name+"\n";

}

void display_player(Player p)
{
    cout<<"Player name: "<< p.get_name()<<endl;
    cout<<"Player health: "<< p.get_health()<<endl;
    cout<<"Player xp: "<< p.get_xp()<<endl;

}

Player::~Player()
{
    cout<<"destructor called for :"<< name<<endl;
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
    Player Joaquin("Joao");
    Joaquin.set_name("Joao");
    Joaquin.talk("ola mundo");
    Player Joelson("Joelson");
    Player myNewPlayer {Joelson};
    myNewPlayer.set_name("abobrinha");
    display_player(Joelson);
    display_player(myNewPlayer);

    return 0;
}