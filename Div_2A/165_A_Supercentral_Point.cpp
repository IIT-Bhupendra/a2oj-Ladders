#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n], sc = 0;
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i=0; i<n; i++){
        int l=0, r=0, u=0, d=0;
        for(int j=0; j<n; j++){
            if(a[i]==a[j]){
                if(b[i]>b[j])
                    d++;
                else if(b[j]>b[i])
                    u++;
            }
            else if(b[i]==b[j])
                if(a[i]>a[j])
                    l++;
                else if(a[j]>a[i])
                    r++;
        }
        if(l>=1 && r>=1 && u>=1 && d>=1)
            sc += 1;
    }
    cout << sc << endl;
}