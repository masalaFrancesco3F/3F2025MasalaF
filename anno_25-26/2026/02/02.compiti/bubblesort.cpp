#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    for (int i=0; i < n-1; i++){
        for (int j=0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
void stampaArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int v[]= {64, 34, 25, 12, 22, 11, 90};

    bubblesort(v, 7);

    stampaArray(v, 7);

}

