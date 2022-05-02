#include<iostream>
/*default values for arguments*/
using namespace std;
double calc_cost(double base_cost,double tax_rate = 0.6);

int main()
{
    double cost {0};
    cost = calc_cost(200.0);
    cout<<"cost: "<<cost<<endl;
    cost = calc_cost(200.0,0.1);
    cout<<"cost: "<<cost<<endl;
    return 0;
}

double calc_cost(double base_cost,double tax_rate)
{
     
    return base_cost+=(base_cost*tax_rate);
}