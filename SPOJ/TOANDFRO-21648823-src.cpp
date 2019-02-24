#include <bits/stdc++.h> 
#define ll long long int
using namespace std;
int main() 
{ ios_base::sync_with_stdio(false); 
cin.tie(NULL);
while(1)
{
 ll c;
 cin>>c;
 if(c==0)
 {
     exit(0);
 }
 string s;
 cin>>s;
 ll r;
 r=s.size()/c;
 char a[r][c];
 //cout<<"*";
 ll d=0;
 for(ll i=0;i<r;i++)
 {
     if(i%2==0)
     {
         for(ll j=0;j<c;j++)
         {
             a[i][j]=s[d];
             d++;
         }
         d--;
     }
     else {
         for(ll j=c;j>=0;j--)
         {
             a[i][j]=s[d];
             d++;
             
             
             
         }
     }
    
 }
 //for(ll i=0;i<r;i++)
 //{
   //  for(ll j=0;j<c;j++)
     //cout<<a[i][j];
     //cout<<"\n";
 //}
 
 for(ll i=0;i<c;i++)
 {
     for(ll j=0;j<r;j++)
     cout<<a[j][i];
 }
 cout<<"\n";
}
return 0;
}