#include<bits/stdc++.h>
using namespace std;

int arr[1000];
int main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        int cs,sum=0;
        cin>>cs;
        for(int i=0; i<cs; i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];
        }
        int avr=sum/cs;
        int cnt=0;
        for(int i=0; i<cs; i++)
        {
            if(arr[i]>avr)
            {
                cnt++;
            }
        }
        double res;
        res=(cnt*1.0/cs)*100;
        printf("%0.3lf",res);
        cout<<"%"<<endl;
    }

    return 0;
}
