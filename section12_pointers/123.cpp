/*pointer arithmetic*/

/*
increments (++): increments a poniter to point to the next array element
int_ptr++;
decrements (--): decrements a pointer to point to the previous array element
int_ptr--;

(+) increment pointer by n*sizeof(type)
int_ptr += n; or int_ptr = int_ptr+n;
(-) decrement pointer by n*sizeof(type)
int_ptr -= n; or int_ptr = int_ptr -n;

subscracting two pointers
 - determine the number of elements between the pointers
 - both pointers must point to the same data type
 int n = int_ptr2-int_ptr1;

 determine if two pointers point to the same location
 - does not compare the data where they point
 example:
 string s1{"frank"};
 string s2 {"frank"};

 string *p1 = {&s1};
 string *p2 = {&s2};
 string *p3 = {&s1};

 cout<<(p1 == p2)<<endl; //false
 cout<<(p1==p3)<<endl; //true

 if you want to compare the values itself, just dereference the pointers and compare them
 cout<<(*p1 ==*p2)<<endl; //true
 cout<<(*p1 ==*p3)<<endl; //true

*/

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int scores [] {100,95,89,68,-1};
    int *score_ptr{scores};
    while (*score_ptr!=-1)
    {
        cout<<*score_ptr<<endl;
        score_ptr++;
    }

    cout<<"\n --------------"<<endl;
    score_ptr=scores;
    while(*score_ptr!=-1)
    {
        cout<<*score_ptr++<<endl; // dereference score_ptr and the increment the same output tha the example above
    }
    cout<<"\n --------------"<<endl;
    string s1{"Frank"};
    string s2{"Frank"};
    string s3{"James"};

    string *p1{&s1};
    string *p2{&s2};
    string *p3{&s1};

    cout<<boolalpha;
    cout<< p1<<"=="<<p2<<": "<<(p1==p2)<<endl; //false
    cout<< p1<<"=="<<p3<<": "<<(p1==p3)<<endl; //true

    cout<< *p1<<"=="<<*p2<<": "<<(*p1==*p2)<<endl; //true
    cout<< *p1<<"=="<<*p3<<": "<<(*p1==*p3)<<endl; //true


    p3 = &s3; // point to james
    cout<< *p1<<"=="<<*p3<<": "<<(*p1==*p3)<<endl; //false
    cout<<"\n --------------"<<endl;
    char name [] {"Frank"};
    char *char_ptr1{nullptr};
    char *char_ptr2{nullptr};

    char_ptr1 = &name[0]; //F
    char_ptr2 = &name[3]; //n

    cout<<"In the string "<<name<<", "<< *char_ptr2<<" is "<<(char_ptr2-char_ptr1)<<" characthers away from "<<*char_ptr1<<endl;







    
    return 0;

}