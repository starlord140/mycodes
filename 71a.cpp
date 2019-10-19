#include<bits/stdc++.h>

using namespace std;
main()
{string s;
    int i,j,k;
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
