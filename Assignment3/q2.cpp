#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t; 
    for (int i = 0; i<t; i++){
        int a, b;
        cin >> a;
        cin >> b;

        int excess = abs(a-b);
        int mini = min(a, b);
        int mini2 = min(mini, excess);
        for (int j = mini)
    }
}