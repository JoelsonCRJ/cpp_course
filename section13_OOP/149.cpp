//deep copy example
#include <iostream>
using namespace std;

class Deep
{
private:
    int *data; //POINTER
public:
    Deep(int d); //Constructor
    Deep(const Deep &source);
    int *get_data(){return data;};
    void set_value(int s){*data=s;}
    ~Deep(); //Destructor
};

Deep::Deep(int d)
{
    data = new int; //allocate storage
    *data = d;
}

Deep::~Deep()
{
    delete data; //free storage
    cout<<"Destructor freing data \n";
}

Deep::Deep(const Deep &source)
: Deep{*source.data}
{
    // data = new int; //allocate storage
    // *data= *source.data;
    cout<<"Copy constructor - Deep \n";
}

//Deleate to Deep(int) and pass in the int (*source.data) source is pointing to 

void display_Deep(Deep source)
{
    cout<< "obj data: "<<*source.get_data()<<endl;
}
//When source goes out of scope the destructor is called and releases data.
//No problem: since the storage being releases is unique to source
int main()
{
    Deep obj1 {100};
    display_Deep(obj1);
    Deep obj2{obj1};
    obj2.set_value(10000);
    display_Deep(obj2);
    return 0;
}