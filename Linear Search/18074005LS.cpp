#include<iostream> 
using namespace std;
int main() {
  int n;
  cin>>n;
  int a[n];
  for(int i = 0; i<n; i++){
    cin>>a[i];
  }
  cin>>x;
  for(int i = 0; i<n; i++){
    if(a[i]==x){
      cout<<i;
      break;
    }
  }
  if(i==n) cout<<"NOT FOUND"<<endl;
  return 0;
}
