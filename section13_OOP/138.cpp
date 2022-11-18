#include<iostream>
#include<string>

class Player
{
public:
    std::string name;
    int health;
    int xp;

    void talk (std::string text_to_say){std::cout<<name<<" says "<<text_to_say<<std::endl;}
    bool is_dead();
};



class Account
{
public:
    std::string name;
    double balance;

    bool deposit(double bal){balance+=bal;std::cout<<"in deposit"<<std::endl;};
    bool withdraw(double bal){balance-=bal;std::cout<<"in withdraw"<<std::endl;};

};

int main()
{

    Account Frank_account;
    Frank_account.name = "frank's account";
    Frank_account.balance=5000.0;
    Frank_account.deposit(1000.0);
    Frank_account.withdraw(500.0);

    // Player frank;

    // frank.name = "Frank";
    // frank.health = 100;
    // frank.xp=12;
    // frank.talk("hi");
    // Player * enemy = new Player(frank);

    // (*enemy).name="joelson";
    // enemy->health=100;

    // enemy->talk("hello. I'll destroy you");

    // delete enemy;

    return 0 ;

}