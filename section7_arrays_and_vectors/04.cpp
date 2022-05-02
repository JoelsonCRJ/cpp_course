/*accessing and modifying vector elements*/

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> test_scores {100,95,99,98,88};

    cout<<"first element of vector is "<<test_scores.at(0)<<endl;
    
    test_scores.at(0)=91;
    cout<<"first element of vector is "<<test_scores.at(0)<<endl;
    test_scores.push_back(105);

    for (int i=0;i<test_scores.size();i++)
    {
    cout<<""<<i <<"element of vector is "<<test_scores.at(i)<<endl;

    }

    /*declaring a two dimensional vector*/

    vector<vector<int>>movie_ratings
    {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    cout<<"[2][2] value "<<movie_ratings.at(1).at(1)<<endl;

    return 0;
}