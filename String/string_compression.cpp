#include<iostream>
#include<vector>
using namespace std;

int strCompression(vector<char> &arr){
    int n = arr.size();
    int idx = 0;
    for (int i = 0; i < n; i++){
        char ch = arr[i], count = 0;

        while(i<n && arr[i] == ch){
            count++;
            i++;
        }
        if(count == 1){
            arr[idx++] = ch;
        }else{
            arr[idx++] = ch;
            string str = to_string(count);

            for(char dig : str){
                arr[idx++] = dig;
            }
        }
        i--;
    }
    arr.resize(idx);
    return idx;
}
int main(){
    vector<char> arr = {'a','a','b','c','c','c','d','d','d'};

    for (int i = 0; i < arr.size();i++){
        strCompression(arr);
        cout << arr[i] <<" ";
    }
    cout << endl;

    return 0;
}