#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, d, p1, p2;

    cin >> a >> b >> c >> d;

    p1 = max((3*a)/10, a - (a*c)/250);
    p2 = max((3*b)/10, b - (b*d)/250);

    if(p1>p2)
        cout << "Misha" << endl;
    else if(p1<p2)
        cout << "Vasya" << endl;
    else
        cout << "Tie" << endl;
}