/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct SDataSet
{
    unsigned char data1;
    unsigned int data2;
    unsigned char data3;
    unsigned short data4;
};

struct SDataSet s;

void print_memory_range(char* base, int size)
{
    int i=0;
    for(i=0;i<size;i++)
    {
        printf("%p \t %x \n",base,(unsigned char)*base);
        base++;
    }
}
int main()
{
    s.data1 = 0x11;
    s.data2 = 0xFFFFEEEE;
    s.data3 = 0x22;
    s.data4 = 0xABCD;
    print_memory_range(&s, sizeof(s));
    return 0;
}




