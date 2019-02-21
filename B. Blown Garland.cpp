#include<bits/stdc++.h>
using namespace std;

map<char, int> mpp;

int main ()
{
    string s;
    char mark[4];

    cin >> s;
    for (int i=0; i<s.size(); i++){
        if (s[i]!='!'){
            mark[i%4]=s[i];
        }
    }
    for (int i=0; i<s.size(); i++){
        if (s[i]=='!' && mark[i%4]=='R') mpp[mark[i%4]]++;
        if (s[i]=='!' && mark[i%4]=='B') mpp[mark[i%4]]++;
        if (s[i]=='!' && mark[i%4]=='Y') mpp[mark[i%4]]++;
        if (s[i]=='!' && mark[i%4]=='G') mpp[mark[i%4]]++;
    }
    cout << mpp['R'] << " " << mpp['B'] << " " << mpp['Y'] << " " << mpp['G'] << endl;
    return 0;
}
