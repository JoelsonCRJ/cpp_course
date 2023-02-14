//friends of a class
//
//a function or class that has access to private class member
//and that functino of or class it NOT a member of the class it is accessing
//
//function 
//can be regular non-member functinos
//can be memeber methods of another class
//
//class
//another class can have access to private class member
//
//
//friendship must be granted NOT taken
//
//declared explicitly in the class that is granting friendship
//declared in the function prototype with the keyword friend
//
//friendship is not symmetric
//
//if A is friend of B
//B is NOT friend of A
//
//friendship is not transitive
//if A it a friend of B AND B is friend of C then A is NOT friend of C
//
//Declaration
//
//class Player{
//friend void display_player(Player &p);
//...
//...
//};
//
