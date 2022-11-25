#include <iostream>
using namespace std;

int main() {
   int i, n = 0, a=1, b=1, c;
    cin>>n;
        cout<<a<<endl<<b<<endl;
        for(i=2;i<=n;i++){
            c=a+b;
            a=b;
            b=c;
            if (c<=n)
            cout<<c<<endl;
        }
   return 0;
}
