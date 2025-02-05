#include <stdio.h>

unsigned int maxOnes(int number);

int main()
{
    printf("Output: %u\n", maxOnes(14));  // Test case 1: Input 14 (01110), Output: 3
    printf("Output: %u\n", maxOnes(110)); // Test case 2: Input 110 (01101110), Output: 3

    return 0;
}

unsigned int maxOnes(int number) 
{
    int counter = 0;
    int max = 0;
    int foundZero = 0; // Flag to indicate if we've found at least one zero

    while (number > 0)
    {
        int bit = number & 1; // Get the least significant bit

        if (bit == 1)
        {
            if (foundZero) // Only count ones if we've found a zero before
            {
                counter++;
                if (counter > max)
                {
                    max = counter;
                }
            }
        }
        else
        {
            foundZero = 1; // Mark that we've found a zero
            counter = 0;   // Reset the counter for ones
        }

        number >>= 1; // Shift right to process the next bit
    }

    return max;
}