/*section challenge*/

/* write a function named apply_all that expects two arrays of integers 
and their sizes and dynamically allocates a new array of integers

whose size is the product of the 2 array sizes

the function should loop through the second array and multiple each element
across each element of the array 1 and store the product in the newly created
array
the function should return a pointer to the newly allocated array

you can also write a print functyion that expects a pointer to an array
of integers and its size and display the elements in the array


ex:

int array[] {1,2,3,4,5}
int array2[]{10,20,30}

result: [10 20 30 40 50 20 40 60 80 100 30 60 90 120 150]

print function

print(array, size)
int * results = apply_all(array1,5,array2,3);
cout<<"Result";
print(results,15);
*/


#include<iostream>

void print(const int * const array, size_t size);
int * apply_all(const int * first_array,const int &first_size,const int * second_array,const int & second_size);
int main()
{
    int array1[] {1,2,3,4,5};
    int array2 [] {10,20,30};
    int * results {nullptr};
    std::cout<<"Array 1: ";
    print(array1,5);
    std::cout<<"Array 2: ";
    print(array2,3); 

    results = apply_all(array1,5,array2,3);
    std::cout<< "Result"<<std::endl;
    print(results,15);

    delete [] results;


    return 0;
}
int * apply_all(const int * const first_array,const int &first_size,const int * const second_array,const int & second_size)
{
    int *output {nullptr};
    int counter{0};
    const int output_size = second_size*first_size;
    output = new int[output_size];
    for (size_t i{0};i<second_size;++i)
    {
        for (size_t j = 0; j < first_size; j++)
        {
            *(output+counter)= *(second_array+i) * (*(first_array+j));
            counter++;
        }
        
    }
    return output;
}


void print(const int * const array, size_t size)
{
    std::cout<<"[ ";
    for(size_t i{0};i<size;++i)
        std::cout<<array[i]<<" ";
    std::cout<<"]";
    std::cout<<std::endl;
}

