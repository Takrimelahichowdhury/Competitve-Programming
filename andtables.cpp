#include<bits\stdc++.h>
using namespace std;
int main()
{
    string s;
    int n,c=0;
    scanf("%d",&n);
    cin>>s;
    for(int i=0; i<s.length(); i++)
    {

        if(s[i]==s[i+1])
        {
            c++;
        }


    }


    printf("%d",c);

}
