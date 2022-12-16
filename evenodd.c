/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    void oddeven(int);
    int n;
    printf("enter number");
    scanf("%d",&n);
    oddeven(n);
    }
    void oddeven(int k)
    {
        int res;
        res=k%2;
        if(res==0)
        {printf("even");
        }
        else{
            printf("odd");
        }
    }

    
