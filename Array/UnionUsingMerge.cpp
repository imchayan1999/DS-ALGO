#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> vec1 = {1,1,3,4,5,8,9,9,9,9};
  vector<int> vec2 = {2,3,3,4};
  
  int i=0;
  int j=0;

  while(i<vec1.size() && j<vec2.size() ) {
    while((i<vec1.size() - 1) && (vec1[i] == vec1[i+1])  ) {
      i++;
    }

    while((j<vec2.size() - 1) && (vec2[j] == vec1[j+1])  ) {
      j++;
    }

    if(vec1[i] < vec2[j]) {
      cout<<vec1[i]<<" ";
      i++;
    }
    else if(vec1[i] > vec2[j]) {
      cout<<vec2[j]<<" ";
      j++;
    }
    else {
      cout<<vec1[i]<<" ";
      i++;
      j++;
    }
  }

  while(i<vec1.size()) {
    if((i<vec1.size() - 1) && (vec1[i] == vec1[i+1]) ) {
      i++;
    }
    else {
      cout<<vec1[i]<<" ";
      i++;
    }
  }

  while(j<vec2.size()) {
    if((j<vec2.size() - 1) && (vec2[j] == vec2[j+1]) ) {
      j++;
    }
    else {
      cout<<vec2[j]<<" ";
      j++;
    }
  }

  

}
