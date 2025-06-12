#include<bits/stdc++.h>
using namespace std;
int findVal(int i,int j)
{
  //cout<<"findval called\n";
  if(i==0 || i==9)
  {
    return 1;
  }
  else if(i==1||i==8)
  {
    if(j==0||j==9)
    {
      return 1;
    }
    else
    {
      return 2;
    }
  }
  else if(i==2||i==7)
  {
    if(j==0||j==9)
    {
      return 1;
    }
    else if(j==1||j==8)
    {
      return 2;
    }
    else
    {
      return 3;
    }
  }
  else if(i==3||i==6)
  {
    if(j==0||j==9)
    {
      return 1;
    }
    else if(j==1||j==8)
    {
      return 2;
    }
    else if(j==2||j==7)
    {
      return 3;
    }
    else
    {
      return 4;
    }
  }
  else if(i==4||i==5)
  {
    if(j==0||j==9)
    {
      return 1;
    }
    else if(j==1||j==8)
    {
      return 2;
    }
    else if(j==2||j==7)
    {
      return 3;
    }
    else if(j==3||j==6)
    {
      return 4;
    }
    else if(j==4||j==5)
    {
      return 5;
    }
  }
}
int main()
{
  int t; cin>>t;
  while(t--)
  {
    int val=0;
    for(int i=0;i<10;i++)
    {
      string str;
      cin>>str;
      for(int j=0;j<10;j++)
      {
        if(str[j]=='X')
        {
          val += findVal(i,j);
        }
        else
        {
          val+=0;
        }
      }
    }
    cout<<val<<endl;
  }
}