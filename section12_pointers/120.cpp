/*dereferencing a pointer*/
#include <iostream>
using namespace std;
#include<vector>
#include<string>
int main()
{
    // int score {100};
    // int *score_ptr{&score};

    // cout<<*score_ptr<<endl; //100
    // *score_ptr=200;
    // cout<<*score_ptr <<endl; //200
    // cout<<score<<endl;//200

    // double high_temp {100.7};
    // double low_temp{37.4};
    // double *temp_ptr{&high_temp};

    // cout<<*temp_ptr<<endl; //100.7
    // temp_ptr=&low_temp;

    // cout<<*temp_ptr<<endl; //37.4

    vector<string> stooges  {"Larry","Moe","Curly"};
    vector<string> *string_ptr {nullptr};

    string_ptr =  & stooges;

    cout<<"First stooge "<<(*string_ptr).at(0)<<endl;

    cout<<"Stooges: ";
    for (auto stooge: *string_ptr)
        cout<<stooge<< " ";
    cout<<endl;
    
    return 0;
}