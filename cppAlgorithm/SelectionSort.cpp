// // 선택 정렬
// // 리스트 중 가장 작은(혹은 큰) 요소를 맨 앞으로 이동시키는 과정을 반복
// //O(N^2)

// //std::vector, swap, cin, cout, endl

// #include <iostream>
// #include <vector>
// using namespace std;

// void SelectionSort(vector<int>& arr){
//     int n = arr.size();
//     for(int i=0; i<n-1; ++i){
//         int minIndex = i;
//         for(int j=i+1; j<n; ++j){
//             if(arr[minIndex]>arr[j]){
//                 minIndex = j;
//             }
//         }
//         swap(arr[i], arr[minIndex]);
//     }
// }


// int main(){
//     vector<int> arr = {3, 4, 1, 5, 2, 3};
//     SelectionSort(arr);
//     for(int n: arr){
//         cout<<n<<" ";
//     }
//     return 0;
// }