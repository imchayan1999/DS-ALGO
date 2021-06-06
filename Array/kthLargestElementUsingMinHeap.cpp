#include<bits/stdc++.h>
using namespace std;

int findkKthLargestElement(vector<int> &vec, int k) {
  priority_queue<int, vector<int>, greater<int>> pq;

  for(int v: vec) {
    pq.push(v);
    if(pq.size() > k) {
      pq.pop();
    }
  }

  return pq.top();
}

int main() {
  int n,k,val;;
  cin>>n;
  cin>>k;

  vector<int>vec;

  for(int i=0; i<n; i++) {
    cin>>val;
    vec.push_back(val);
  }

  int res = findkKthLargestElement(vec, k);

  cout<<"The "<<k<<" largest element is: "<<res;
}
