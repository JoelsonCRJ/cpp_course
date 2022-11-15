/*pointers pitfalls*/
//1
/*unitialized pointers
int *int_ptr; pointing to anywhere


*int_ptr = 100; hopefully a crash

*/

/*
2

Dangling pointer 

Pointer that is pointing to released memory
2 pointers point to the same data
1 pointer releases the data with delete
the other pointer access the release data

pointer that points to memory that is invalid 
we saw this when we returned a pointer to a function local variable
*/

/*
3


not checking if new failed

if new fail an exception is thrown
we can use exception handling to catch exceptions
dereferencing a null pointer will cause your program to crash
*/

/* 
4

Leaking memory

forgetting to release allocated memory with delete

if you lose your pointer to the storage allocated on the heap you have not way
to get to that storage again

the memory is orphaned or leaked

one of the most commom pointer problems

*/