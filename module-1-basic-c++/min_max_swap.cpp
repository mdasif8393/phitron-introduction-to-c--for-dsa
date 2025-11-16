#include<iostream>
#include<algorithm>
using namespace std;

int main(){

    int a, b;
    cin >> a>> b;

    cout << min({3,6, 1, 2, 3, 4}) << endl;

    cout << max({5, 8, 4, 7, 8, 2, 9}) << endl;

    swap(a, b);
    cout << a << " " << b;

    return 0;
}