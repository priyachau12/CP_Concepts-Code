#include<bits/stdc++.h>
using namespace std;
int maxSubArraySum()
{
    long long size;
    cin>>size;
    vector<long long>a(size);
    for(long long i=0;i<size;i++)
    {
        cin>>a[i];
    }

    long long max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++) {
        max_ending_here = max_ending_here + a[i];
        
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0 )
            max_ending_here = 0;
        if(i<size-1)
        {
            if(abs(a[i]%2)==abs(a[i+1]%2))
            {
                max_ending_here = 0;
            }
        }    
        
    }   
    return max_so_far;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cout<<maxSubArraySum()<<endl;
    }
    return 0;
}