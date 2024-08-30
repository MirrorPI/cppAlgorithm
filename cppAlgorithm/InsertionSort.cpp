// 삽입정렬
// 리스트의 각 요소를 순차적으로 비교하여 적절한 위치에 삽입
// O(N^2)


#include <iostream>
#include <vector>
using namespace std;

void InsertionSort(vector <int>& arr){
    int n = arr.size();
    int j;
    for(int i=1; i<n; --i){
        int key = arr[i];
        for(j=i-1; j>=0 && arr[j]>key; --j){
            arr[j+1] = arr[j];
        }
        arr[j+1] = key;
    }
}

int main(){
    vector <int> arr = {3, 2, 5, 7, 3, 6};
    InsertionSort(arr);
    for(int n : arr){
        cout<<n<<" ";
    }
    return 0;
}