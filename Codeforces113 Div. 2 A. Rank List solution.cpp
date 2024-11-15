#include<bits/stdc++.h>
using namespace std;
bool cmp(const pair<int,int>&p1 , const pair<int,int>&p2)
{
    if(p1.first>p2.first) return 1;//pair e jodi p1.first>p2.first hoy,tahole sort e jar solve beshi seta upore thakbe.
    else if(p1.first==p2.first) return(p1.second<p2.second);//pair e jodi p1.first==p2.first hoye,taholee jetar second choto(p1.second) seta sort e upore thakbe.
    else return 0;//onnothai (p2.second) upore thakbe.
}
int main()
{
 int n,k;
 cin>>n>>k;
 vector<pair<int,int>>v(n);//pari in vector e input golo nilum.
 for(int i=0;i<n;i++)
 {
    cin>>v[i].first>>v[i].second;
 }
 sort(v.begin(),v.end(),cmp);//sort korar somoy akta comparator dilum,cmp er return type onojayi sort hoy moto.
 int ans=0;
 for(auto u:v)
 {
    if(u==v[k-1]) //er por jodi vector-pair e v[k-1]/kth er moto onekgolo thakee,tader ke count korlum.
    ans++;
 }
 cout<<ans<<endl;//count ta ke answer hisebe print korlum.
return 0;
}
