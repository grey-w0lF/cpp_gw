#include <bits/stdc++.h>
using namespace std;
// int fact(int num,int &val)
// {
//     if(num==0)
//     {
//         return val;
//     }
//     val=val*num;
//     fact(num-1,val);
// }
// void getPrint(int num,int val,int itr)
// {
//     if(val>num)
//     {
//         return;
//     }
    
//     cout<<val<<" ";
//     getPrint(num,val*itr,itr+1);
// }
// void vecReverse(vector<int> &v,int s,int e)
// {
//     if(s>e)
//     {
//         return;
//     }
//     swap(v[s],v[e]);
//     vecReverse(v,s+1,e-1);
// }
// bool checkPalin(string &s,int st,int e)
// {
//     if(st>e)
//     {
//         return true;
//     }
//     if(s[st]!=s[e])
//     {
//         return false;
//     }
//     checkPalin(s,st+1,e-1);
// }
// void getFibbo(int num,int a,int b,int nexterm)
// {
//     if(nexterm>=num)
//     {
//         return;
//     }
//     cout<<nexterm<<" ";
//     a=b;
//     b=nexterm;
//     getFibbo(num,a,b,a+b);
// }
int main()
{

    // int num;
    // cin>> num;
    // int val=1;
    // int res= fact(num,val);
    // cout<<res;

    // factorial numbers less than n
    // int n;
    // cin>>n;
    
    // getPrint(n,1,2);

    //Reverse an array
    // vector<int> v{1,5,7,9,6,0,3};
    // vecReverse(v,0,v.size()-1);
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }

    //check Palindrome or Not
    // string s;
    // getline(cin,s);
    // bool is = false;
    // is=checkPalin(s,0,s.size()-1);
    // cout<<is<<endl;

    // int num;
    // cin>>num;
    // int a=0;
    // int b=1;
    // cout<<a<<" "<<b<<" ";
    // int nexterm=a+b;
    // getFibbo(num,a,b,nexterm);

    return 0;
}