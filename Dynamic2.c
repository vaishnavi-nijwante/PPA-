#include<stdio.h>   // standard input output
#include<stdlib.h>  // standard library

int main()
{
    int *ptr = NULL;

    // Step 1 : Allocate the memory
    ptr = (int *)malloc(5 * sizeof(int));

    // Step 2 : Use the memory
    // LOGIC
    
    // Step 3 : Deallocate the memory
    free(ptr);

    return 0;
}