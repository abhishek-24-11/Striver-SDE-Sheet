int uniqueElement(vector<int> arr, int n)
{
	// Write your code here
    //Brute Force Approach
//     int element = 0;
//     for(int i = 0;i<arr.size();i++){
//         element = element ^ arr[i];
//     }
//     return element;
    //Optimal Approach
    int low = 0;
    int high = arr.size()-2;
    while(low<=high){
        int mid = (low+high)>>1;
        if(arr[mid] == arr[mid^1]){
            low = mid+1;
        }
        else{
            high = mid - 1;
        }
    }
    return arr[low];
}
