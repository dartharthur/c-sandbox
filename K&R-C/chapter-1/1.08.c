/* Arguments - Call by Value */

/*
    All function arguments are passed "by value". 
    
    This means that the called function is given the values of its arguments 
    in temporary variables rather than the originals.

    As such, parameters can be treated as initialized local variables in the called routine.
    
    See example below.

    It is possible to arrange for a function to modify a variable in a calling routine. 
    The caller must provide the address of the variable to be set (technically a pointer to the
    variable), and the called function must declare the parameter to be a pointer and access the
    variable indirectly through it.

    This is not true for arrays. When the name of an array is used as an argument, the value 
    passed to the function is the location or address of the beginning of the array - there 
    is no copying of array elements. 
*/

/* power: raise base to n-th power; n >= 0; version 2 */
int power(int base, int n)
{
    int p;
    /*
        Note how the parameter n is used as a temporary variable and is counted down
        until it becomes zero. We no longer need the variable i. Whatever is done to n
        from within the power routine has no effect on the argument that power was
        originally called with.
    */
    for (p = 1; n > 0; --n) 
        p = p * base;
    return p; 
}
