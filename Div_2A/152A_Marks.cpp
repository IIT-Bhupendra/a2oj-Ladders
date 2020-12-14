#include <iostream>
using namespace std;

int main(){
    int n, m, ans=0;

    cin >> n >> m;

    char a[n][m];

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for (int i = 0; i < n; ++i){   
        bool wasBest = false;
        for(int j = 0; j < m; ++j){
            bool isBest = true;
            for(int k = 0; k < n; ++k)
                if(a[k][j] > a[i][j])
                    isBest = false;
            if(isBest)        
                wasBest = true;
        }
    if(wasBest)
        ans++;
    } 

cout << ans << endl;
}