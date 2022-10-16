#include <iostream>
using namespace std;
/*dynamic memory allocation*/

int main()
{
    // int *int_ptr{nullptr};
    // int_ptr = new int; //allocate an integer on the heap

    // cout<<int_ptr<<endl;
    // cout<<*int_ptr<<endl;
    // *int_ptr = 100;
    // cout<<*int_ptr<<endl; //100
    // delete int_ptr; //frees the allocated storage 

    // int *array_ptr{nullptr};
    // int size{};

    // cout<<"how big do you ant the array?";
    // cin>>size;
    // array_ptr = new int [size]; //allocate array on the heap
    
    int * integer_ptr{nullptr};
    integer_ptr = new int; //allocated on the heap
    delete integer_ptr;

    size_t size{0};
    double *temp_ptr{nullptr};
    cout<<"how many temps?"<<endl;
    cin >>size;

    temp_ptr = new double [size];
    cout<<temp_ptr<<endl;
    delete [] temp_ptr;

    // cout<<integer_ptr<<endl;


    
    return 0;
}