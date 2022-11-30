#include <bits/stdc++.h>
using namespace std;
void remvDupli(vector<int> &v,int s)
{
    int s2=0;
    while(s<v.size()-1)
    {
        s2=s+1;
        if(v[s2] != v[s])
        {
            v[s+1]=v[s2];
            s++;

        }
        else
        {
            s2++;
        }
    }
}
void moveOToEnd(vector<int> &v)
{
    
    return;

}
void getIntersection(vector<int> &v1,vector<int> &v2)
{
     set<int> myset;
    for(int i=0;i<v1.size();i++)
    {
        
        myset.insert(v1[i]);
    }
    
    for(int i=0;i<v2.size();i++)
    {
        auto is=myset.insert(v2[i]);
        if(!is.second)
        {
            cout<<v2[i]<<" ";
        }
        else
        {
            continue;
        }
    }
    return;
}
void getReapeatingMissing(vector<int> v1)
{
    sort(v1.begin(),v1.end());
    set<int> setter;
    cout<<"Repeating"<<endl;
    for(int i=0;i<v1.size();i++)
    {
        auto is = setter.insert(v1[i]);
        if(!is.second)
        {
            cout<<v1[i]<<endl;
        }
    }
    bool is=false;
    cout<<"Missing"<<endl;
    for(int i=1;i<=v1.size();i++)
    {
        is = binary_search(v1.begin(),v1.end(),i);
        if(is==false)
        {
            cout<<i<<" ";
        }
    }
    return;

}

int main(){

   //Remove Duplicates From A Sorted Array
//    vector<int> v{1,2,2,3,8,8,9};
//    remvDupli(v,0);
// vector<int> v{2,1,5,6,7,8,0,1,0,6,7,0};
// moveOToEnd(v);
//    vector<int> v1 {1,2,3,3,4,5,6};
//    vector<int> v2 {3,3,5};
//    getIntersection(v1,v2);
// vector<int> v{3,1,2,5,4,6,7,5};
// getReapeatingMissing(v);


  
    return 0;

}