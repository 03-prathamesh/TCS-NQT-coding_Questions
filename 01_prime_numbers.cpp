
// find all prime numbers upto the n 

#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cout<<"Enter the number: "<<endl;
  cin>>n;

  vector<int>ans;
  

  for(int i=2;i<=n;i++){
     bool check=true;
      for(int j=2;j<i;j++){
        
        if(i%j==0){
            check=false;
        }
      }
      if(check==true){
        ans.push_back(i);
      }
  }

  for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
  }



    return 0;
}