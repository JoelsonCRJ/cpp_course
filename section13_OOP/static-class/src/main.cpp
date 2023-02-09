#include<iostream>
#include "../lib/Player/src/Player.h"
using namespace std;

void display_active_players()
{
    cout<<"Active players: "<<Player::get_num_players()<<endl;
}

int main()
{
    display_active_players();
    Player hero{"Hero"};
    display_active_players();
    
    {
	Player abobora{"abobora"};
	display_active_players();
    }
    display_active_players();
    // Player obj1("Frank",0,0);
    // display_active_players();
    return 0 ;
}
