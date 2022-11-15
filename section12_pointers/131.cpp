/*section recap*/


/*When to use pointers vs reference parameters*/

/*PASS by value
when the function does not modify the actual parameter, and the parameter is small and efficient to copy like simple
types(int, char, double, etc)
*/

/*PASS-by-reference using a pointer

when the function does modify the actual parameter,
and,
the parameter is expensive to copy,
and

its ok to the pointer is allowed a nullptr value

*/

/* pass-by-reference using a pointer to const

when the function does not modify the actual parameter,
and,
the parameter is expensive to copy,
and
its ok to the pointer is allowed a nullptr value
*/

/*pass by reference using a const pointer to const
when the function does not modify the actual parameter
and 
the parameter is expensive to copy
and
its ok to the pointer is allowed a nullptr value
and
you don't want to modify the pointer itself
*/

/* pass-by-reference using a reference

when the function does modify the actual parameter,
and,
the parameter is expensive to copy,
and
the parameter will never be a nullptr
*/

/* pass-by-reference using a const reference

when the function does not modifify the actual parameters,
and
the parameter is expensive to copy
and
the parameter will never be nullptr


*/