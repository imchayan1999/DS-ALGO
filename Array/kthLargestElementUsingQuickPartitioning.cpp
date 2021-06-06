#include<bits/stdc++.h>
using namespace std;

int partition(vector<int>& arr, int left, int right, int pivotIndex) {
    int pivotValue = arr[pivotIndex];
    int lesserItemsTailIndex = left;
    swap(arr[pivotIndex],arr[right]);

    for (int i = left; i < right; i++) {
      if (arr[i] < pivotValue) {
        swap(arr[i],arr[lesserItemsTailIndex]);
        lesserItemsTailIndex++;
      }
    }
    swap(arr[right],arr[lesserItemsTailIndex]);

    return lesserItemsTailIndex;
  }


 int kthLargest(vector<int>& arr, int k) {
      
      int n = arr.size();
      int left = 0;
      int right = n - 1;
      
      while (left <= right) {
      int choosenPivotIndex = rand()%(right - left + 1) + left;

      int finalIndexOfChoosenPivot = partition(arr, left, right, choosenPivotIndex);

      if (finalIndexOfChoosenPivot == n - k) {
        return arr[finalIndexOfChoosenPivot];
      } else if (finalIndexOfChoosenPivot > n - k) {
        right = finalIndexOfChoosenPivot - 1;
      } else {
        left = finalIndexOfChoosenPivot + 1;
      }
    }

    return -1;
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

  int res = kthLargest(vec, k);

  cout<<"The "<<k<<" largest element is: "<<res;
}
