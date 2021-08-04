/*Given  N strings ,print unique strings in lexicographacially order with their frequency
N<=10^5
|s|<=100
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;

    int n;
    cin>>n;
    for(int i=0;i<n;i++){
      string s;
      cin>>s;
      m[s]++;
    }
    for(auto m1 : m){

    
    cout<<m1.first<<" "<<m1.second<<endl;
    }
}