#ifndef _MOVIES_H_
#define _MOVIES_H_

#include<iostream>
#include "Movie.h"
#include<vector>

class Movies 
{
    private:
	    vector<Movie> movies;
    public:
        void add_movie(std::string movie_name,std::string rating_value, int watched_value);
        void increment_watched_value(std::string &movie_name);
        void display_all_movies();
        Movies();
        ~Movies();


};


#endif
