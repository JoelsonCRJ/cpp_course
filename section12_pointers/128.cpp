/*REFERENCES*/

/*
an alias for a variable
must be initialized toa variable when declared

cannot be null

once initialized cannot be made to refer to a different variable

very useful as function parameters

might be helpul to think 
of a reference as a constant pointer that is automatically dereferenced
*/


#include<iostream>
#include<vector>
/*range-based for loop*/
// int main()
// {
//     std::vector<std::string> stooges{"larry","moe","curly"};


//     // for (auto &str: stooges)
//     // {
//     //     str="Funny";
//     // }

//     for(auto const &str: stooges)
//         std::cout<<str<<std::endl;
//     return 0;
// }
/*example 1 */

// int main ()
// {
//     int num{100};
//     int &ref {num};
//     std::cout<<num<<std::endl;
//     std::cout<<ref<<std::endl;
//     num=200;
//     std::cout<<num<<std::endl;
//     std::cout<<ref<<std::endl;
//     ref = 300;
//     std::cout<<num<<std::endl;
//     std::cout<<ref<<std::endl;

//     return 0;
// }

/*example 2 */

int main ()
{
    std::vector<std::string> stooges {"larry","moe","curly"};

    for(auto str: stooges)
        str="funny"; // str is a COPY of the each vector element
    
    for(auto str: stooges)
        std::cout<<str<<std::endl;
    
    for(auto &str: stooges) //str is a reference to each vector element
        str="funny";
    for(auto const &str: stooges)
        std::cout<<str<<std::endl;   



    return 0;
}

