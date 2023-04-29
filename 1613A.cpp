/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,x1,x2,p1,p2;
    cin>>t;
    while(t--)
    {
         string a,b;
        cin>>x1>>p1;
        cin>>x2>>p2;
        for(i=0;i<p1;i++){
          x1=x1*10;
        }
        for(i=0;i<p2;i++){
          x2=x2*10;
        }
        if(x1>x2){
          cout<<">\n";
        }
        else  if(x1<x2){
          cout<<"<\n";
        }
        else{
          cout<<"=\n";
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




