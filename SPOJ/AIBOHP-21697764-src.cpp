#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
ll b[6102][6102];
ll lcs(char *s1,char *s2,ll m,ll n)
{
    ll b[6102][6102];
    
    for(ll i=0;i<=m;i++)
    {
        for(ll j=0;j<=n;j++)
        {
            if(i==0||j==0)
            b[i][j]=0;
            else if(s1[i-1]==s2[j-1])
            {
                b[i][j]=1+b[i-1][j-1];
            }
            else 
            b[i][j]=max(b[i-1][j],b[i][j-1]);
            
        }
    }
    return b[m][n];
}
int main()
{ 
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{   for(ll i=0;i<6102;i++)
    for(ll j=0;j<6102;j++)
    b[i][j]=0;
    char s1[6102];
    cin>>s1;
    ll n=strlen(s1);
    char s2[n];
    for(ll i=n-1;i>=0;i--)
    s2[n-1-i]=s1[i];
    ll k;
    k=lcs(s1,s2,n,n);
    cout<<n-k<<"\n";
    
}
return 0;
}
