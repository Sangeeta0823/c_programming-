/******************************************************************************
Name : Sangeeta Bind 
UIN : 251C021
DIV : B 
Roll no.: 18 
Branch : Civil 
*******************************************************************************/
#include <stdio.h>
void counter();
int main()
{
    counter();
    counter();
    counter();
    counter();
    return 0;
}
void counter()
{
    static int count = 0;   
    count++;
    printf("Function is called %d time(s)\n", count);
}
