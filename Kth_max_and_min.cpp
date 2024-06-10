#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter size of your array: ";
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
  int k;
  cout<<"Enter which max/min element you want: ";
  cin>>k;
  for(int i=0;i<n;i++){        //for sorting the array in decresing order
      for(int j=i+1;j<n;j++){
          if(a[i]<a[j]){
              int temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
  }
int ansmax=a[k-1];
int ansmin=a[n-k];
  cout<<"The "<<k<<"th max/min elements are: "<<ansmax<<" "<<ansmin;
    

    return 0;
}