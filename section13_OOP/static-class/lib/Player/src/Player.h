//static class members

/*telling the cpp that this class members belong to the class, 
not to the objects,
useful to store class-wide information
*/
#ifndef _PLAYER_H_
#define _PLAYER_H_
#include<iostream>
#include<string>

class Player
{
private:
    static int num_players;
    std::string name;
    int health;
    int xp;
public:
    std::string get_name(){return name;};
    int get_health(){return health;}
    int get_xp(){return xp;}
    Player(std::string name_val="None", int health_val=0, int xp_val=0);
    Player(const Player &source);// copy constructor
    // Player(std::string name_val, int health_val, int xp_val);
    static int get_num_players();
    ~Player();
    
};

// Player::Player(/* args */)
// :name{"none"},health{0},xp{0}
// {
// }

#endif 