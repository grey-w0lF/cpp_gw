#include <iostream>
#include <cmath>
using namespace std;
int getGcd(int a,int b)
{

    if (b == 0) {
		return a;
	}
	return getGcd(b, a % b);
}
int main()
{

    //Hcf And Lcm of 2,3,4.. numbers
    // Using Euclidean’s theorem.
    int a=4;
    int b=8;
    int res=getGcd(a,b);
    //divisor
    //count dig
    //palindrome
    //reverse a number
    //armstrong
    //
    cout<<res;
    return 0;
    
}