// //버블정렬
// //인접한 두 요소를 비교후 정렬
// //O(N^2)

// //std::vector, swap, cin, cout, endl

// #include <iostream>
// #include <vector>
// using namespace std;

// void BubbleSort(vector <int>& arr){
//     int n = arr.size();
//     for(int i=0; i<n-1; ++i){
//         for(int j=0; j<n-1-i; ++j){
//             if(arr[j] > arr[j+1]){
//                 swap(arr[j], arr[j+1]);
//             }
//         }
//     }
// }

// int main(){
//     vector<int> arr = {2, 4, 3, 5, 1, 2};
//     BubbleSort(arr);
//     for(int n: arr){
//         cout<<n<<" ";
//     }
//     return 0;
// }