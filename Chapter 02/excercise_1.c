/**
 *  Add a retrieve function to the counting example from Listing 2-6 to
 *  retrieve the current value of counter.
 */
#include <stdio.h>

// Declare the static counter variable at file scope
static unsigned int counter = 0;

void increment(void);
int retrieve(void);

int main(void)
{
    for (int i = 0; i < 5; i++)
    {
        increment();
    }
    
    // retrieve function
    printf("\nCurrent counter value: %d\n", retrieve());
    
    return 0;
}

void increment(void)
{
    counter++;
    printf("%d ", counter);
}

int retrieve(void)
{
    return counter;
}