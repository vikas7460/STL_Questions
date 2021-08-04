/* Given N strings , print unique strings
in lexicographically order
N<=10^5
|S|<=10000
*/

//since we need only unque strings so we can use set instead of map
#include<bits/stdc++.h>
using namespace std;
int main(){
    set<string> s1;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        s1.insert(s);//as strings enters in set it will automatially be uniue and sorted we only need to print

    }
    for(auto &s2:s1){
        cout<<s2<<" "<<endl;
    }
}