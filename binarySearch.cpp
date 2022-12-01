#include <bits/stdc++.h>
using namespace std;
bool binarySearchRecurr(vector<int> &v,int s,int e,int key)
{
   int mid=s+(e-s)/2;
   if(s>=e)
   return false;
   if(v[mid]==key)
   return true;
   if(key<v[mid])
   {
    binarySearchRecurr(v,s,mid,key);
   }
   else
   {
    binarySearchRecurr(v,mid+1,e,key);
   }
   

}

int main()
{
    vector<int> v{2, 2, 5, 5, 20, 30, 30};
    int key;
    cin>>key;
    cout<<binarySearchRecurr(v,0,v.size(),key);
   

    return 0;

}