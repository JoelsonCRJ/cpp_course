#include<iostream>
/*passing arrays to functions*/
using namespace std;
void print_array(const int numbers [],size_t size);
int main()
{
    int my_numbers [] {1,2,3,4};
    print_array(my_numbers,4);
    
    return 0;
}

void print_array(const int numbers [],size_t size)
{
    for (size_t i {0};i<size;i++)
    {
        cout<<""<<numbers[i]<<endl;
    }
}
