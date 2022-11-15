#include <iostream>
#include<vector>
using namespace std;

void double_data(int *int_ptr);
void display(vector<string> *v );
void display(int * array, int sentinel);
void swap(int *a,int *b);
int main ()
{

    // int x{100},y{200};

    // cout<<"\nx: "<< x<<endl;
    // cout<<"y: "<<y<<endl;

    // swap(&x,&y);
    // cout<<"\nx: "<< x<<endl;
    // cout<<"y: "<<y<<endl;
    int value {10};
    int *int_ptr{nullptr};
    cout<<"Value: "<<value<<endl;

    // double_data(&value);
    // cout<<"Value: "<<value<<endl;

    cout<<"-------------------"<<endl;
    int_ptr = &value;
    double_data(int_ptr);
    cout<<"Value: "<<value<<endl;
    // cout<<"----------------"<<endl;
    // vector<string> stooges {"Larry","Moe","Curly"};
    // display(&stooges);

    // cout<<"\n---------------"<<endl;
    // int scores[]{100,98,97,96,85,-1};
    // display(scores,-1);
    
    return 0;

}

void double_data (int *int_ptr)
{
    *int_ptr *=2;
    
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void display(const vector<string> *const v )
{
    for (auto str: *v)
    {
        cout<<str<< " ";
    }
    // (*v).at(0)="Joelson";
    // v= nullptr;
    cout<<endl;
}

void display(int * array, int sentinel)
{
    while (*array!= sentinel)
    {
        cout<<*array++<<" ";
    }
    cout<<endl;
}