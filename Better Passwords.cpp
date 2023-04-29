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
    string s,t;
    cin>>s;
    t.push_back(toupper(s[0]));
    for(i=1;i<s.size();i++){
     if(s[i]=='s'){
           t.push_back('$');
     }
     else if(s[i]=='i'){
         t.push_back('!');
     }
     else if(s[i]=='o'){
               t.push_back('(');
               t.push_back(')');
     }
     else{
         t.push_back(s[i]);
     }
    }
    t.push_back('.');
    cout<<t<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




