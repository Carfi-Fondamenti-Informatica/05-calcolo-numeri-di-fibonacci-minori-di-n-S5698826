#include <iostream>
using namespace std;

int main() {
int n=0, primoN=1,secondoN=1,terzoN;
cin>>n;
cout<<pirmoN<<endl;
cout<<secondoN<<endl;
for (int i=2;i<n;i++ ) {
    terzoN = primoN + secondoN;
    primoN = secondoN;
    secondoN = terzoN;
    if (terzoN <= n) {
        cout << terzoN << endl;
    }
}
   return 0;
}
