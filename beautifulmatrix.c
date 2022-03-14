#include<stdio.h>
int main()
{
    int s[5][5];
    for(int i=1; s[i]<=5; i++)
    {
        for(int j=1; s[j]<=5; j++)
         {
             scanf("%d",&s[i][j]);
         }


    }

    for(int i=1; s[i]<=5; i++)
    {
        for(int j=1; s[j]<=5; j++)
         {
              printf("%d",s[i][j]);
         }


    }

}

