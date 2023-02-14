#include "../include/Movie.h"

Movie::Movie(std::string name_val,std::string rating_val, int watched_val)
    :name{name_val},rating{rating_val},watched{watched_val}
{}

Movie::Movie(const Movie &source)
    : name{source.name},rating{source.rating},watched{source.watched}
{}

std::string Movie::get_name() const 
{
    return name;
}

std::string Movie::get_rating() const
{

    return rating;
}

int Movie::get_watched_val() const
{
    return watched;
}

void Movie::increment_watched_val()
{
    watched ++;
}


