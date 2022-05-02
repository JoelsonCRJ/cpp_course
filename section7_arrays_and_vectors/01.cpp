#include <iostream>
using namespace std;
/*initialize,acessing and modifying arrays*/
int main()
{
    // int test_scores [5] {10,9}; /*the reamining is 0*/
    // int another_array [] {1,2,3,4,5}; /*the compiler will put size 5*/
    // cout<<another_array[0]<<endl; /*first element of the array*/

    // char vowels [] {'a','e','i','o','u'};
    // cout<<"\n The first vowel is: "<< vowels[0]<<endl;
    // cout<<"\n The second vowel is: "<< vowels[4]<<endl;
    // cin>> vowels[5];// out of bounds 

    int test_scores [5] {};

    cout<<"test_scores[0] "<<test_scores[0]<<endl;
    cout<<"test_scores [1]"<<test_scores[1]<<endl;
    cout<<"test_scores[2] "<<test_scores[2]<<endl;
    cout<<"test_scores [3]"<<test_scores[3]<<endl;
    cout<<"test_scores [4]"<<test_scores[4]<<endl;

    return 0;
}