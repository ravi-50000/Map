//Print the Distinct Characters from the string in the order.
//c++ code:
#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
map<char,int>m;
for(int i=0;i<s.size();i++)
m[s[i]]++;
for(int i=0;i<s.size();i++){
if(m[s[i]]>0){
cout<<s[i];
m[s[i]]=0;
}
}
return 0;
}
/*Input:
abacbad
Output:
abcd
Explanation:If the frequnecy of the current character is greater than zero than print that character and mark that character frequency to zero. Next time it will not be printed.*/