
#include <iostream>
using namespace std;

int main() {
    int t, n,r;

    cin>>t;

    for(int i=1;i<=t;i++){
        cin>>n;
        r=(((((n*567)/9)+7492)*235)/47)-498;

        cout<<abs((r/10)%10)<<endl;
    }
    //cout<<(((((n*567)/9)+7492)*235)/47)-498;
    //r=(((((n*567)/9)+7492)*235)/47)-498;
    //cout<<r%10;
    //((((n(n*567)/9)+7492)*235)/47)-498
    return 0;
}
