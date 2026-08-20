#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>&arr,int low,int mid,int high){
    vector<int>temp;
    int i = low;
    int j = mid+1;
    while(i <= mid && j<= high){
        if(arr[i] <= arr[j]){
            temp.push_back(arr[i]);;
            i++;
        }
        else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while (i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= high) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = low; i <= high ;i++){
        arr[i] = temp[i - low];
    }

}
void mergeSort(vector<int>&arr,int low, int high){
    if(low>=high){
        return;
    }
    int mid = low + (high-low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cout << "ENTER THE SIZE OF THE ARRAY : ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0;i<n;i++){
        cin >> arr[i];
    } 
    int low = 0;
    int high = n-1;
    mergeSort(arr,low,high);

    for(int i = 0;i<arr.size();i++){
        cout << arr[i] << " ";
    }
}