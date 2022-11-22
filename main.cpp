#include <iostream>
using namespace std;

int main() {
    int n=0;
    cin >> n;
    int x=1, y=0, z=0;
    if (n>=2) {
        cout << x << endl;
        for (int i=1; i<n; i++) {
            z = x;
            x = x + y;
            y = z;
            cout << x << endl;
        }
    } else {
            cout << "errore" << endl;
        }
    return 0;
}
