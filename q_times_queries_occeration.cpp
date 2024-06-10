#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,26,6,3,30};
    int n=v.size();
    const int N=1e5 +10;
     vector<int>freq(N,0);
 for(int i=0;i<n;i++){
     freq[v[i]]++;
 }

 cout<<"Enter queries: ";
 int q;cin>>q;
 while(q--){
    int queryelement;
    cout<<"Enter queryelemet: ";
    cin>>queryelement;
    cout<<freq[queryelement]<<endl;
 }
}