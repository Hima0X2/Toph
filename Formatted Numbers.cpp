/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int i,n;
     string s,t="";
     cin>>s;
     if(s.size()<=3){
          cout<<s<<endl;
          return 0;
     }
for(i=s.size()-4;i>=0;i=i-3){
t.push_back(s[i]);
if(i-1>=0){
t.push_back(s[i-1]);
}
if(i-2>=0){
     t.push_back(s[i-2]);
     t.push_back(',');
}
}
if(t.back()==','){
     t.pop_back();
}
reverse(t.begin(),t.end());
cout<<t;
cout<<","<<s[s.size()-3]<<s[s.size()-2]<<s[s.size()-1]<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




