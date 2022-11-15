/*returning a pointer from a function*/

#include <iostream>

/*returning dynamically allocated memory*/


int *create_array(size_t size, int * init_value)
{
    int *new_storage {nullptr};

    new_storage = new int[size];
    for (size_t i{0};i<size;++i)
    {
        *(new_storage+i)= *init_value;
        *init_value+=1;
    }
    return new_storage;
}
int *largest_int(int *int_ptr1, int *int_ptr2)
{
    if(*int_ptr1>*int_ptr2)
        return int_ptr1;
    else
        return int_ptr2;
}
void display(const int * const array, size_t size)
{
    for(size_t i{0};i<size;++i)
        std::cout<<array[i]<<std::endl;
    std::cout<<std::endl;
    
}
// int main ()
// {

//     // int a{100},b{200};
//     // int *largest_ptr {nullptr};
//     // largest_ptr = largest_int(&a,&b);

//     // std::cout<<*largest_ptr<<std::endl;//200


//     int *my_array;
//     my_array = create_array(100,20); // stores the array on the heap memory

//     delete [] my_array; // freeing storage
//     return 0;
// }

int main ()
{
    int *my_array {nullptr};
    int *init_value_ptr {nullptr};
    size_t size;
    int init_value {};

    std::cout<<"\nHow many integers would you like to allocate?";
    std::cin>> size;
    std::cout<<"\nWhat value would you like them initialized to?";
    std::cin>>init_value;
    init_value_ptr = new int;
    *init_value_ptr= init_value;
    my_array = create_array(size,init_value_ptr);
    display(my_array,size);
    delete [] my_array;
    // delete init_value_ptr;
    std::cout<<"\n----------------"<<std::endl;
    std::cout<<init_value<<std::endl;
    init_value_ptr = nullptr;
    std::cout<<init_value_ptr<<std::endl;

    delete init_value_ptr;

    return 0;
}
