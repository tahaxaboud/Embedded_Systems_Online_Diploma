/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct S_student
{
    char m_name[50];
    unsigned int m_roll;
    float m_marks;
};
int main()
{
    struct S_student s;
    printf("Enter name: ");
    fgets(s.m_name, sizeof(s.m_name), stdin);
    
    printf("Enter roll number: ");
    scanf("%u",&s.m_roll);
    
    printf("Enter marks: ");
    scanf("%f",&s.m_marks);
    
    printf("Displaying Information\n");
    printf("name: %s",s.m_name);
    printf("Roll: %u\n",s.m_roll);
    printf("name: %.2f\n",s.m_marks);

    return 0;
}
