#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    while(t--)
    {
    string s;
    int i,j,k,l;
    cin>>k;
    while(k--)
    {
        cin>>s;


            j=s.length();
            if(j>10)
            cout<<s[0]<<s.length()-2<<s[j-1];
            else
                cout<<s;

    }
    }
}
