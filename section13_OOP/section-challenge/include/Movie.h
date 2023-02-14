#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <iostream>
#include<string>
using namespace std;
class Movie
{
    private:
	std::string name;
	std::string rating;
	int watched;
    public:
	std::string get_name () const;
	std::string get_rating () const;
	int get_watched_val () const ;
	void increment_watched_val();

	Movie(std::string name_val, std::string rating_val, int watched_val);
	Movie(const Movie &source); //copy constructor
	~Movie(){};
};
#endif
