#include<bits/stdc++.h>

using namespace std;
main()
{
    int i,j,k=0,l;
    string s,s1;
    cin>>s >>s1;
    l=s.length();
    for(i=0;i<l;i++)
    {
        if(abs(s[i]-s1[i])==0||abs(s[i]-s1[i])==32)
            continue;
        else if((s[i]-s1[i])>0||(s1[i]-s[i])>32)
        {k++;
break;
        }
        else if((s1[i]-s[i])>0||(s[i]-s1[i])<32)
        {
            k--;
            break;
        }
    }
    if(k==0)
        cout<<"0";
    else if(k>0)
        cout<<"1";
    else if(k<0)
        cout<<"-1";
}
