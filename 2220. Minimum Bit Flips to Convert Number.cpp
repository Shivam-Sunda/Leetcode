#include<bits/stdc++.h>
using namespace std;

int main()
{
    int start;
    int goal;

    cout<<"Enter start value: ";
    cin>>start;
    cout<<"Enter goal value: ";
    cin>>goal;

    bitset<64> s(start);
    bitset<64> g(goal);

    int count = 0;

    for(int i=0; i<64; i++){
        if(s[i]==g[i])
            continue;
        else{
            s.flip(i);
            count++;
        }
    }

    cout<<count;


    return 0;
}