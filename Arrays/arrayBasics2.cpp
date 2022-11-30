#include <bits/stdc++.h>
using namespace std;

void printSubArrays(vector<int> arr,vector<vector<int>> &ans,vector<int> temp, int start, int end,multimap<int,int> &mapper)
{
if (end == arr.size())
return;

else if (start > end)
printSubArrays(arr,ans,temp, 0, end + 1,mapper);

else {
int size=0;
    int cnt=0;
for (int i = start; i <=end; i++)
{
    
  if(arr[i]==0)
  {
    cnt++;
  }
  temp.push_back(arr[i]);
  size++;
    
}
mapper.emplace(size,cnt);
temp.clear();
ans.push_back(temp);
printSubArrays(arr,ans,temp,start + 1, end,mapper);
}
return;
}

void getMax(vector<int> v,int m)
{
    vector<vector<int>> ans;
    vector<int> temp;
    multimap<int,int> mapper;
    printSubArrays(v,ans,temp, 0, 0,mapper);
    // cout<<ans.size();
    int max=0;
    for(auto itr:mapper)
    {
       if(itr.second==m)
       {
        if(itr.first>=max)
        {
            max=itr.first;
        }
       }
    }
    cout<<max;
    
    return;
}
int main(){

vector<int> arr = { 1, 0, 1 };
int m;
cin>>m;
getMax(arr,m);

return 0;

}