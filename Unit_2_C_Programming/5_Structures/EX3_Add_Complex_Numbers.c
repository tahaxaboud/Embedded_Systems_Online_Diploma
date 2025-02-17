/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct S_complex
{
    float m_real;
    float m_imaginary;
};

void AddComplexNumbers(struct S_complex First_Number,struct S_complex Second_Number);

int main()
{
    struct S_complex First_Number, Second_Number;
    printf ("For 1st complex number\nEnter real and imaginary respectively: " );
    scanf("%f %f",&First_Number.m_real,&First_Number.m_imaginary);
    
    printf ("For 2st complex number\nEnter real and imaginary respectively: " );
    scanf("%f %f",&Second_Number.m_real,&Second_Number.m_imaginary);

    AddComplexNumbers(First_Number,Second_Number);
    return 0;
}

void AddComplexNumbers(struct S_complex First_Number,struct S_complex Second_Number)
{
    struct S_complex Result;
    Result.m_real = First_Number.m_real + Second_Number.m_real;
    Result.m_imaginary = First_Number.m_imaginary + Second_Number.m_imaginary;
    
    printf("Sum : %.1f + %.1fi ",Result.m_real,Result.m_imaginary);
}


