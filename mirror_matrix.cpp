
/*
input --
11 12 13
14 15 16
17 18 19
andd output be like--
13 12 11
16 15 14
19 18 17 
*/
#include<iostream>
using namespace std;
int main()
{
    int a[3][3]={11,12,13,14,15,16,17,18,19};
    int i,j;
    cout<<"sum of row is \n";
    for (i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<" ";
        }
       cout<<"\n";
    }
    cout<<"mirror materix is \n";
   
    for (i=0;i<3;i++)
    {
        for(j=2;j>=0;j--)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}