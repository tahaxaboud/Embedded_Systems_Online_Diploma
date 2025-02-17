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
    int m_roll;
    float m_marks;
};

int main()
{
    struct S_student students[10];
    int i;
    
    for( i=1 ; i <= 10 ; i++)
    {
        printf("For roll number %d \n", i);
        printf("Enter name: ");
        fflush (stdin); fflush(stdout);
	    scanf ("%s", students[i].m_name);
    
        printf("Enter roll number: ");
        fflush (stdin); fflush(stdout);
        scanf("%u",&students[i].m_roll);
    
        printf("Enter marks: ");
        fflush (stdin); fflush(stdout);
        scanf("%f",&students[i].m_marks);
    }

    printf("Displaying information of students: \n");
    
    for( i=1 ; i <= 10 ; i++)
    {
        printf("Information for roll number %d \n", i);
        printf("Name: %s\n",students[i].m_name);
        printf("Roll: %d\n",students[i].m_roll);
        printf("Marks: %1.f\n", students[i].m_marks);
        
    }
    

    return 0;
}
