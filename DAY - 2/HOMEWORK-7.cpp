#include<iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter value of n"<<endl;;
    cin >> n;
    int i = 1;
    while(i <= n) {
        //  Increasing numbers
        int j = 1;
        while(j <= n - i + 1) {
            cout << j << " ";
            j++;
        }
        //  Stars
        int star = 1;
        while(star <= 2*(i - 1)) {
            cout << "* ";
            star++;
        }
        //  Decreasing numbers
        int k = n - i + 1;
        while(k >= 1) {
            cout << k << " ";
            k--;
        }
        cout << endl;
        i++;
    }
}