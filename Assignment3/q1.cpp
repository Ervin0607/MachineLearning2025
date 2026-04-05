#include <iostream>
#include <vector>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 0; i<t; i++){
        int n;
        cin >> n;
        if (n==1){
            int x;
            cin >> x;
            cout << 1 << '\n';
            continue;
        }
        for (int j = 0; j<n; j++){
            int x;
            cin >> x;
            cout << 2 << ' ';
        }
        cout << '\n';
    }
    return 0;
}