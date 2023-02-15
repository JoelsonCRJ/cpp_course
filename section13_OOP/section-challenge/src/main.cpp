#include "../include/Movies.h"
#include<iostream>

using namespace std;


int main()
{
    Movies cinema;
    cinema.display_all_movies();
    cinema.add_movie("Here I am","10",10);
    cout<<"------------------\n";
    cinema.add_movie("Here I am","10",10);
    cinema.display_all_movies();
    return 0;
}