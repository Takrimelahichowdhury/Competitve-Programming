#include<bits\stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
    int i,j;
    for(i=0; i<3; i++)
    {
       for(j=0; j<3; j++)
       {
           scanf("%d",&arr[i][j]);
       }


    }



    for(i=0; j<3; j++)
    {
        for(j=0; j<3; j++)
        {

            printf("%d",arr[i][j]);
            if(j==2){
            printf("\n");

        }
    }

}
return 0;
}
