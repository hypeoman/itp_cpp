

// N белочек нашли K орешков и решили разделить их поровну. Определите, сколько орешков достанется каждой белочке.

#include <iostream>
using namespace std;
int main() {
    int n,k;
    cin >> n >> k;
    int belka = k/n;
    cout << belka;
    return 0;
}