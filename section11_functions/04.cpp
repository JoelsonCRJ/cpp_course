/*Passing by reference*/
#include<iostream>

using namespace std;
void scale_number( int &num); // prototype
int main ()
{
    int number {100};
    scale_number(number); //call
    cout<<number<<endl; //100
    return 0;
}

void scale_number(int &num)
{
    if (num>100)
    {
        num=100;
    }
}