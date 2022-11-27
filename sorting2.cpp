// Merge And Quick Sort For Array
#include <bits/stdc++.h>
using namespace std;
void mergeTwoSorted(vector<int> &v,int s,int e)
{
    int mid = s+(e-s)/2;
    int l1=0;
    int l2=0;
    l1=mid-s+1;
    l2=e-mid;
    vector<int> temp1;
    vector<int>temp2;
    int mainIdx=s;
    for(int i=0;i<l1;i++)
    {
        temp1.push_back(v[mainIdx]);
        mainIdx++;

    }
   
    for(int i=0;i<l2;i++)
    {
        temp2.push_back(v[mainIdx]);
        mainIdx++;
        
    }

    int i1=0;
    int i2=0;
    mainIdx=s;

    while(i1!=l1 && i2!=l2)
    {
        if(temp1[i1]<=temp2[i1])
        {
           v[mainIdx]=temp1[i1];
           i1++;
           mainIdx++;

        }
        else
        {
            v[mainIdx]=temp2[i2];
            i2++;
            mainIdx++;
        }
    }
    while(i1!=l1)
    {
        v[mainIdx]=temp1[i1];
           i1++;
           mainIdx++; 
    }
    while(i2!=l2)
    {
        v[mainIdx]=temp2[i2];
            i2++;
            mainIdx++;
    }

    return;
}
void mergeSort(vector<int> &v,int s,int e)
{
    if(s>=e)
    return;
    int mid=s+(e-s)/2;
    mergeSort(v,s,mid);
    mergeSort(v,mid+1,e);
    mergeTwoSorted(v,s,e);
}
void recBubbleSort(vector<int> &v,int i)
{
     if(i>=v.size()-1)
     return;
     for(int idx=i+1;idx<v.size();idx++)
     {
        if(v[idx]<=v[i])
        {
            swap(v[i],v[idx]);
        }
     }
     recBubbleSort(v,i+1);
}
int main(){


    vector<int> v{9,8,7,2,1,3};
    // mergeSort(v,0,v.size()-1);
    // recBubbleSort(v,0);
    for(auto i:v)
    {
        cout<<i<<" ";

    }
    return 0;

}