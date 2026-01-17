#include <bits/stdc++.h>
using namespace std;

void increm(int arr[], int n) {
    
    for(int i = 0; i < n; i++) {
        arr[i] += 1;
    }
}

int main() {
    int num[] = {1, 4, 2, 5};
    int n = sizeof(num) / sizeof(num[0]); 

    increm(num, n); 

   
    for(int i = 0; i < n; i++) {
        cout << num[i] << " ";
    }
}
