#include<bits/stdc++.h>
using namespace std;

int main()
{
    long int a[3];
    int tt,cs=0;
    cin>>tt;
    while(tt--){
            cs++;
        cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
         if((a[0]+a[1])<=a[2])
           cout<<"Case "<<cs<<": "<<"Invalid"<<endl;
        else if(a[0]<=0||a[1]<=0||a[2]<=0)
            cout<<"Case "<<cs<<": "<<"Invalid"<<endl;
        else if((a[0]==a[1])&&(a[0]==a[2]))
            cout<<"Case "<<cs<<": "<<"Equilateral"<<endl;

        else if((a[0]==a[1])||(a[1]==a[2]))
            cout<<"Case "<<cs<<": "<<"Isosceles"<<endl;
        else if(a[0]+a[1]>a[2])
            cout<<"Case "<<cs<<": "<<"Scalene"<<endl;


    }
    return 0;
}
