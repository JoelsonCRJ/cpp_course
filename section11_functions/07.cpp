// calculing factorial of a number using recursion
#include <iostream>
using namespace std;
unsigned long long factorial(unsigned long long n);
int main ()

{
    cout<<factorial(8)<<endl;
    return 0;
}


unsigned long long factorial(unsigned long long n)
{
    if (n==0)
    {
        return 1; //base case
    }
    return n* factorial(n-1); //recursive case
}
