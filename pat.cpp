#include<iostream>
using namespace std;
int main()
{
    int n,num=1;
    cout<<"enter the limit to print=";
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            cout<<num<<" ";
            num++;
        }
         cout<<endl;
       
    }
} 