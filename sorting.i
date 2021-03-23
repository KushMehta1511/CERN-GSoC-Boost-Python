//Interface file sorting.i
%module sorting
%{
    //Everything in this block would be copied in the wrapper file. So here we include the c++ header file necessary to compile the interface.
    #include "sorting.h"
%}

//We would also list all the functions which are to be interfaced
//When we have to include only some functions then just mention the definitions.
void sort(int *arr, int nums);
//To include all the functions of the header file:
%include "sort.h"

//Here the interface is created and we can implement required python code int hese functions.
