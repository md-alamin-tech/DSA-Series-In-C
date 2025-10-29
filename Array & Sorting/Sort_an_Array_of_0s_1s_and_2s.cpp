#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {0, 0, 2, 2, 1, 2, 1, 2, 0};
    int n = arr.size();

    int counter0 = 0, counter1 = 0, counter2 = 0;

    for (int i = 0; i < n; i++){
        if(arr[i] == 0) counter0++;
        else if(arr[i] == 1) counter1++;
        else counter2++;
    }

    int idx = 0;
    for (int i = 0; i < counter0; i++){
        arr[idx++] = 0;
    }
     
    for (int i = 0; i < counter1; i++){
        arr[idx++] = 1;
    }
     
    for (int i = 0; i < counter2; i++){
        arr[idx++] = 2;
    }

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}