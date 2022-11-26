#include <bits/stdc++.h>
using namespace std;
void selectionSort(vector<int> &v)
{
    int minIdx;
    for(int i=0;i<v.size()-1;i++)
    {
        minIdx=i;
        for(int j=i+1;j<v.size();j++)
        {
           if(v[j]<=v[minIdx])
           {
            minIdx=j;
           }

        }
        swap(v[i],v[minIdx]);
    }
}
void bubbleSort(vector<int> &v)
{
    for(int i=0;i<v.size()-1;i++)
    {
        for(int j=i+1;j<v.size();j++)
        {
            if(v[j]<=v[i])
            {
                swap(v[i],v[j]);
            }
        }
    }
}
void insertionSort(vector<int> &v)
{
    int key;
    int j=0;
    for(int i=1;i<v.size();i++)
    {
        key=v[i];
       j=i-1;
       while(j>=0 && key<=v[j])
       {
        v[j+1]=v[j];
        j--;
       }
       v[j+1]=key;
    }
}

int main(){


    vector<int> v{9,8,7,6,5,4};
    // selectionSort(v);
    // bubbleSort(v);
    // insertionSort(v);

    for(auto i:v)
    {
        cout<<i<<" ";
    }
    return 0;
}