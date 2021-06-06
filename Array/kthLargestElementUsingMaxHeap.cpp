#include<bits/stdc++.h>
using namespace std;

int findkKthLargestElement(vector<int> &vec, int k) {
  priority_queue<int> pq;

  for(int i=0; i<vec.size(); i++) {
    pq.push(vec[i]);
  }

  for(int i=0; i<k-1; i++) {
    pq.pop();
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
