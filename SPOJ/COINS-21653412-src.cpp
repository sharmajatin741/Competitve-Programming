#include <bits/stdc++.h> 

#define ll long long int

using namespace std;
unordered_map <ll ,ll> a;

ll bitland(ll n)
{
    if(n==0)
    {   
        return 0;
    }
     
    if(a[n]!=0)
    {
        return a[n];
    }
    else {
        ll ans =bitland(n/2)+bitland(n/3)+bitland(n/4);
        if(ans>n)
        {
            a[n]=ans;
            return a[n];
        }
        else {
            a[n]=n;
            return a[n];
        }
        
    }
}

int main()

{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll n;
while(cin>>n)
{

    cout<<bitland(n)<<"\n";
    
}
return 0;

}