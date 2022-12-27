//Move constructors
#include<iostream>
#include<vector>
using namespace std;
// int x{100};
//overloading methods
// void func(int &num)//A
// void func(int&&num)//B
//l-values are variables letters
//r-values are constants

//func(x) -> calls A-x is an l-value
//func(200) -> calls B - 200 is an r-value

//Move constructor syntax - r-value reference
//Type::Type(Type &&source);
//ex:
//Move::Move(Move &&source)
class Move
{
    private:
        int *data;//raw_pointer
    public:
        void set_data_value(int d) {*data=d;}
        int get_data_value(){return *data;}
        Move(int d); //constructor
        // Move(const Move &source); //copy constructor
        Move(Move &&source); //Move constructor
        ~Move(); //destructor
};

Move::Move(Move &&source)
:data{source.data}
{
    cout<<"Move constructor for: "<<*source.data<<endl;
    source.data = nullptr; //steal the data and then null out the source pointer
}
// Move::Move(const Move &source) // deep copy
// {
//     data = new int;
//     *data= *source.data;
//     cout<<"copy constructor - deep copy for: "<<*data<<endl;
// }
Move::~Move()
{
    if(data!=nullptr)
    {
        cout<<"Destructor freeing data for: "<<*data<<endl;
    }
    else
    {
        cout <<"Destructor freeing data for nullptr"<<endl;
    }
    delete data;
}
Move::Move(int d)
{
    data = new int; //allocate storage
    *data = d;
    cout<<"constructor for "<<d<<endl;
}
int main()
{

    vector<Move> vec;
    vec.push_back(Move{10});
    vec.push_back(Move{20});
    //copy constructors will be called to copy the temps
    return 0;
}