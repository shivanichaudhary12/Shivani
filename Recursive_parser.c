#include<stdio.h>
static char c[10];
int j=0;
int main()
{
    printf("Enter a string\n");
    scanf("%s",c);
    E();
    if(c[j]=='$')
        printf("Valid string\n");
    else
        printf("Invalid string\n");
    return 0;
}
E()
{
    Y();
    Eprime();
    return;
}
X()
{
    if(c[j]=='+')
    {
        j++;
        E();
    }
    else if(c[j]=='*')
    {
        j++;
        E();
    }
    return;
}
Y()
{
    if(c[j]=='(')
    {
        j++;
        E();
        if(c[j]==')')
            j++;
    }
    else if(c[j]=='i')
        j++;
    return;
}

Eprime()
{
    X();
    Eprime();
    return;
}
