
#include<stdio.h>
#include<string.h>



int top=-1;
char Stack[4]= {'\0'};
int main()
{
    char Str1[4]= {'\0'};
    char Str2[4]= {'\0'};
    int i;
    strcpy(Str1, "CSE");
     //printf("%s", Str1);
    for(i=0; i<3; ++i)
    {
        Push(Str1[i]);
    }
    for(i=0; i<3; ++i)
    {
        Str2[i]=pop();
    }
    printf("%s", Str2);
    return 0;
}

void Push(char x)
{
    Stack[++top]=x;
    return;
}

char pop()
{
    return Stack[top--];
}

