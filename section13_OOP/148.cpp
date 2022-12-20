//shallow copy example
#include <iostream>
using namespace std;

class Shallow
{
private:
    int *data; //POINTER
public:
    Shallow(int d); //Constructor
    Shallow(const Shallow &source);
    int *get_data(){return data;};
    ~Shallow(); //Destructor
};

Shallow::Shallow(int d)
{
    data = new int; //allocate storage
    *data = d;
}

Shallow::~Shallow()
{
    delete data; //free storage
    cout<<"Destructor freing data \n";
}

Shallow::Shallow(const Shallow &source)
: data(source.data)
{
    cout<<"Copy constructor - shallow \n";
}

//Shallow copy - only the pointer is copied - not what it is pointing to !
//Problem: source and the newly created object BOTH point to the SAME data area!

void display_shallow(Shallow source)
{
    cout<< "obj data: "<<*source.get_data()<<endl;
}
int main()
{
    Shallow obj1 {100};
    display_shallow(obj1);
    return 0;
}