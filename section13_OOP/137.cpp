#include <iostream>
#include<string>
#include<vector>
// class Player
// {
//     //attributes 
//     std::string name;
//     int health;
//     int xp;
//     //methods
//     void talk(std::string text_to_say);
//     bool is_deat();
// };

// class Account
// {
//     //attributes 
//     std::string name;
//     double balance;
//     //methods
//     bool withdraw(double amount);
//     bool deposit(double amount);
// };
// int main()
// {
//     Player frank;
//     Player hero;
//     Player players[] {frank,hero}; //can be used as cpp variables
//     std::vector<Player> players_2 {frank,frank}; //here also
//     Player *enemy = new Player();
//     delete enemy;
// }

class Player

{
    //attributes
    std::string name {"Player"};
    int health{0};
    int xp{3};
    //methods
    void talk(std::string);
    bool is_dead();
};

class Account 
{
    //attributes
    std::string name{"Account"};
    double balance{0.0};
    //methods
    bool deposit(double);
    bool withdraw(double);
};
int main()
{
    Player frank,hero;
    Account frank_account;
    Account joelson_account;


    Player players [] {frank,hero}; 
    std::vector<Player> player_vec {frank};
    player_vec.push_back(hero);

    Player *enemy {nullptr};
    enemy = new Player;

    delete enemy;

    return 0;
}
