/*L-values and R-values
L-values
values that have names and are addressable
modificable if they are not constants

ex:
int x{100}; x is an l-value

x=1000;

x=1000+20;

string name; name is an l-value
name ="joelson"


R-values

r-value (non-addressable and non-assignable)

on the right-hand side of an assignment expression
a literal
a temporary which is intended to be non-modifiable


ex:

int x{100}; 100 is an r-value
int y=x+200; x+200 is an r-value
name = "joelson"; "joelson" is an r-value

int max_num = max(20,30); max(20,30) is an r-value
*/


/* l-values references*/

/*
ex: 

int x{100};
int &ref1=x; allowed
int &ref2 = 100; error

the same when we pass-by-reference

int square(int &n)
{
    return n*n;
}

int num{10};
square(num); ok
square(5); error - can't reference r-value 5


*/