#include<iostream>
using namespace std;
int main()
{
    int n,a,b,c=0;
    scanf("%d",&n);
    while(n--){
      scanf("%d %d",&a,&b);
      while(a%b!=0)
    {
        c++;
        a++;
    }
      printf("%d\n",c);

    }

}











