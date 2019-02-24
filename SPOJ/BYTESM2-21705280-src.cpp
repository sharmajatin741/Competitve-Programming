#include <bits/stdc++.h> 

#define ll long long int

using namespace std;
#define  M 1000
ll a[M][M];
ll b[M][M];
ll max3(ll x,ll y,ll z)
{
   return x>=y?((x>=z)?x:z):((y>=z)?y:z);   
}

ll ph(ll m,ll n,ll x,ll y)
{
        if(x>m-1||y>n-1||x<0||y<0)
        {
            return 0;
        }
        if(b[x][y]!=-1)
        return b[x][y];
        ll t1,t2,t3;
        
        t1=a[x][y]+ph(m,n,x+1,y-1);
        t2=a[x][y]+ph(m,n,x+1,y);
        t3=a[x][y]+ph(m,n,x+1,y+1);
        
        
        return b[x][y]=max3(t1,t2,t3);
         
}
int main()
{ 
ios_base::sync_with_stdio(false);

cin.tie(NULL);
ll t;
cin>>t;
while(t--)
{   for(ll i=0;i<M;i++)
    for(ll j=0;j<M;j++)
    b[i][j]=-1;
    
    
    ll n1,m1;
    cin>>n1>>m1;
   // ll a[n1][m1];
    for(ll i=0;i<n1;i++)
    {
        for(ll j=0;j<m1;j++)
        cin>>a[i][j];
    }
    ll ma=0;
    ll pos;
    for(ll i=0;i<m1;i++)
    {
          
      ll u;
      u=ph(n1,m1,0,i);
      if(u>ma)
      {
          ma=u;
          pos=i;
      }
        
    }
    cout<<ma<<"\n";
}


return 0;

}