#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main()
{
    // int num{10};
    // cout<<"value of num is: "<<num<<endl;
    // cout<<"size of num is: "<<sizeof num <<endl;
    // cout<<"the address of num is: "<<&num<<endl;

    // int *p{};

    // cout<<"\n value of p is:" <<p<<endl; //garbage

    // cout<<"address of p is: "<<&p<<endl;
    // cout<<"Sizeof p is: "<<sizeof p<<endl;

    // p=nullptr;
    // cout<<"\n value of p is:" <<p<<endl; //garbage

    int *p1 {nullptr};
    double *p2 {nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};


    cout<<"\n size of p1 is: " <<sizeof p1<<endl;
    cout<<"\n size of p2 is: " <<sizeof p2<<endl;    
    cout<<"\n size of p3 is: " <<sizeof p3<<endl;    
    cout<<"\n size of p4 is: " <<sizeof p4<<endl;    
    cout<<"\n size of p5 is: " <<sizeof p5<<endl;    
    
    int score{10};
    double high_temp{100.7};

    int *score_ptr{nullptr};

    score_ptr = &score;
    cout<<"value of score is: " <<score<<endl;
    cout<<"Address of score is: "<<&score<<endl;
    cout<<"value of score_ptr is: "<<score_ptr<<endl;

    return 0;
}
