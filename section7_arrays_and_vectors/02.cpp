/*multidimensional arrays*/

#include <iostream>
using namespace std;
int main()
{
    const int rows {3};
    const int cols {4};
    int twod [rows][cols]
    {
        {1,1,1,1},
        {2,2,2},
        {3}
    };
    cout<<twod[1][3]<<endl;
    return 0;
}
