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
    int sum=0;
for (int i = start; i <=end; i++)
{
    
  // if(arr[i]==0)
  // {
  //   cnt++;
  // }
  sum=sum+arr[i];

  temp.push_back(arr[i]);
  size++;
    
}
// mapper.emplace(size,cnt);
mapper.emplace(size,sum);
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
void getMaxSub(vector<int> &v,int &sum)
{
   vector<vector<int>> ans;
   vector<int> temp;
   multimap<int,int> mapper;
   printSubArrays(v,ans,temp,0,0,mapper);
   int max=0;
   for(auto i:mapper)
   {
    if(i.second==sum)
    {
      if(i.first>=max)
    {
      max=i.first;
    }
    }
   }
   cout<<max<<endl;
  return;

}
int getMissing(vector<int> &v,int s,int e)
{
   
   while(s<=e)
   {
     int mid=s+(e-s)/2;
     if(v[mid]!=v[mid+1] && v[mid]!=v[mid-1])
     {
      return v[mid];

     }
     getMissing(v,s,mid);
     getMissing(v,mid+1,e);
     return 0;
   }
}
int main(){
// Maximize Number of 1's
// vector<int> arr = { 1, 0, 1 };
// int m;
// cin>>m;
// getMax(arr,m);
// Max Subarray of Given Sum
// vector<int> v{2,3,5,1,9};
// int sum;
// cin>> sum;
// getMaxSub(v,sum);
vector<int> v{2, 2, 5, 5, 20, 30, 30};
cout<<getMissing(v,0,v.size()-1);

return 0;

}