//Find the Frequency of the strings and Print all the strings in Lexicographical order along with their Frequencies.
//c++ code:
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;//number of strings
map<string,int>m;
string s[n];
for(int i=0;i<n;i++){
cin>>s[i];
m[s[i]]++;
}

for(auto i:m)
cout<<i.first<<" "<<i.second<<"\n";
return 0;
}
/*Input:
5
aba
cse
ravi
map
cse
Output:
aba 1
cse 2
map 1
ravi 1
Explanation: We are taking key as string,element as int to store the frequency of the string. By default element(int) will be zero.*/