#include <iostream>
using namespace std;

int main(){
    int n, x, l, r, m = 1, d = 0, wt = 0;

    cin >> n >> x;

    for(int i=0; i<n; i++){
        cin >> l >> r;

        if(l - m >= x){
            d = (l - m) / x;
            m += d * x;
        }
        wt += r - m + 1;
        m = r + 1;
    }
    cout << wt << endl;
}