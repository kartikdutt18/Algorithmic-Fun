#include<iostream>
#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000007
using namespace std;

int findPeakElement(vector<int>& nums)
{
  int l = 0, r = nums.size();
  while (l + 1 < r)
  {
    int mid = (l + r) / 2;
    if (nums[mid] < nums[mid - 1])
      r = mid;
    else
      l = mid;
  }

  return l;
}

int main()
{
  ios::sync_with_stdio(false);
  return 0;
}