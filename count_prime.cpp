#include<iostream>
#include<vector>
using namespace std;

int main() {
  int end,count=0,num_track=7;
  vector<int> store_prime;
  store_prime.push_back(2);
  store_prime.push_back(3);
  cin>>end;
  if (end>=3) {
    count = 2;
  }else{
    count = 1;
  }
  while(num_track<=end) {
    int determine=0;
    for(int i=0;i<count;i++) {
      if(num_track%store_prime[i]==0) {
        determine = 1;
        break;
      }
    }
      if(determine==0) {
        count++;
        store_prime.push_back(num_track);
      }
      num_track++;
  }
  cout<<count;
  return 0;
}
