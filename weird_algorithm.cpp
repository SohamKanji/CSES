#include <iostream>
#include <vector>
typedef long long ll;

using namespace std;

int main() {
    ll n;
    cin>>n;

    while(n != 1) {
        cout << n << " ";
        if (n%2 == 0) {
            n/=2;
        } else {
            n = n*3 + 1;
        }
    }

    cout << n << endl;
}