#include<bits\stdc++.h>
using namespace std;
int main()
{
    long long int t;
    string s1;
    char c;
    while(t--)
    {
        cin>>s1,c;
        vector<long long int>v;

        long long int max=0;
        for(long long int i =0; i<s1.size(); i++)
        {

            if(s1[i]==c)
            v.pb(i);


        }
        if(v.size()==0)
            {
                cout<<"NO"<<endl;
            }
        else{
            for(long long int i=0; i<v.size; i++)
            {
                if((s1.size()-v[i]+1)%2==0)
                {
                    max++;
                    break;
                }
            }
            if(max>0)
                cout<<"YES"<endl;
            else cout<<"NO"<<endl;
        }
    }




    }





