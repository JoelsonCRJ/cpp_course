#include "../include/Movies.h" 
#include <vector>
#include <algorithm>
using namespace std;
void Movies::add_movie(std::string movie_name,std::string rating_value, int watched_value)
{

    if(movies.size()!= 0)
    {
        for (auto it = movies.begin();it != movies.end();it++)
        {
            if(it->get_name() == movie_name)
            {
                cout<<"you've already have this movie stored in the collection"<<endl;
                cout<<"Incrementing watched param"<<endl;
                it->increment_watched_val();
            }
            else
            {
                cout<<"Inserting movie [ "<< movie_name <<" ] in the collection"<<endl;
                Movie movie_to_be_pushed{movie_name,rating_value,watched_value};
                movies.push_back(movie_to_be_pushed);
            }

        }
    }
    else{
        cout<<"collection is empty, so... "<<endl;
        cout<<"Inserting movie [ "<< movie_name <<" ] in the collection"<<endl;
        Movie movie_to_be_pushed{movie_name,rating_value,watched_value};
        movies.push_back(movie_to_be_pushed);

    }
}


void Movies::display_all_movies()
{
    if(movies.size()!= 0)
    {
        cout<<"You have "<<movies.size()<< " movies which will be displyed bellow. \n";
        int count=0;
        for(auto it = movies.begin();it !=movies.end();it++)
        {
            cout<< "[ "<<count<<" ]: "<< it->get_name()<<endl;
            count++;    
        }
    }
    else
    {
        cout<<"You don't have movies to be displayed, please add at least one to the collection"<<endl;
    }
}

Movies::Movies(){}
Movies::~Movies(){}