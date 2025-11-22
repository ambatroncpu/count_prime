#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main() {
  cin.tie(nullptr)->sync_with_stdio(false);
  
  // input , variable
  int end,count=0,pos=1;
  vector<int> store;
  store.push_back(2);
  store.push_back(3);
  cin>>end;

  // calculate
  if(end>=3){
    count = 2;
  }else if(end==2) {
    count = 1;
  }else{
    count = 0;
  }
  while(end>=6*pos-1) {
    int deter1=6*pos-1,deter2=6*pos+1;
    for (int i=0;i<count;i++) {
      if((6*pos-1) % store[i] == 0) {
        deter1 = 1;
        break;
      }else if (store[i]>sqrt(6*pos-1)) {
        break;
      }
    }
    for (int i=0;i<count;i++) {
      if((6*pos+1) % store[i] == 0 || 6*pos+1>end) {
        deter2 = 1;
        break;
      }else if (store[i]>sqrt(6*pos+1)) {
        break;
      }
    }
    if (deter1!=1) {
      count++;
      store.push_back(deter1);
    }
    if (deter2!=1) {
      count++;
      store.push_back(deter2);
    }
    pos++;
  }

  // output
  if (store[count-1]==end) {
    cout<<end<<" is a prime\n";
  }
  cout<<"there are "<<count<<" prime in range\n";
  cout<<"all prime in range : ";
  for (int i=0;i<count;i++) {
    cout<<store[i]<<" ";
  }
  
  return 0;
}
