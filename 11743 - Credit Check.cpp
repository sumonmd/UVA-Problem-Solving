#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin>>tt;
    cin.ignore();
    while(tt--){
    string str;
    getline(cin,str);
    int res1=0;
    int s1,s2,s3,s4,s5,s6,s7;
    int s0=(str[0]-48)*2;
    if(s0<=9)
        res1=res1+s0;
        else{
            int rm=s0%10;
            res1=res1+rm;
            s0=s0/10;
            res1=res1+(s0%10);
        }
    s1=(str[2]-48)*2;
    if(s1<=9)
        res1=res1+s1;
    else{
        int rm=s1%10;
            res1=res1+rm;
            s1=s1/10;
            res1=res1+(s1%10);
    }
    s2=(str[5]-48)*2;
    if(s2<=9)
        res1=res1+s2;
    else{
        int rm=s2%10;
            res1=res1+rm;
            s2=s2/10;
            res1=res1+(s2%10);
    }
    s3=(str[7]-48)*2;
    if(s3<=9)
        res1=res1+s3;
    else{
        int rm=s3%10;
            res1=res1+rm;
            s3=s3/10;
            res1=res1+(s3%10);
    }

    s4=(str[10]-48)*2;
    if(s4<=9)
        res1=res1+s4;
    else{
        int rm=s4%10;
            res1=res1+rm;
            s4=s4/10;
            res1=res1+(s4%10);
    }
     s5=(str[12]-48)*2;
    if(s5<=9)
        res1=res1+s5;
    else{
        int rm=s5%10;
            res1=res1+rm;
            s5=s5/10;
            res1=res1+(s5%10);
    }
    s6=(str[15]-48)*2;
     if(s6<=9)
        res1=res1+s6;
    else{
        int rm=s6%10;
            res1=res1+rm;
            s6=s6/10;
            res1=res1+(s6%10);
    }
    s7=(str[17]-48)*2;
     if(s7<=9)
        res1=res1+s7;
    else{
        int rm=s7%10;
            res1=res1+rm;
            s7=s7/10;
            res1=res1+(s7%10);
    }
    int res2=0;
     res2=res2+(str[1]-48)+(str[3]-48)+(str[6]-48)+(str[8]-48)+(str[11]-48);
     res2=res2+(str[13]-48)+(str[16]-48)+(str[18]-48);

     if((res1+res2)%10==0)
        printf("Valid\n");
     else
        printf("Invalid\n");

    }
    return 0;
}
