int search(int* arr, int n, int key) {
//     // Write your code here.
//     for(int i = 0;i<n;i++){
//         if(arr[i] == key){
//             return i;
//         }
//     }
//     return -1;
//     //I got TLE 
//     //So. i will try to solve in Optimal Approad i.e, Binary Search
    int low = 0;
    int high = n-1;
    while(low <= high){
        int mid = low+(high - low)/2;
        if(arr[mid] == key) {
            return mid;
        }
         if(arr[low]<= arr[mid]){
            if(arr[low]<=key && arr[mid] > key){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        else{
            if(arr[mid]<key && arr[high] >= key){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        
    }
//     if(arr[low] == key){
//         return low;
//     }
//     else{
//         return -1;
//     }
   return -1;
//     int low=0,high=n-1;

//    while(low<=high){

//        int mid=low+(high-low)/2;

//        if(arr[mid]==key)

//            return mid;

//        if(arr[low]<=arr[mid]){

//            if(arr[low]<=key and key<arr[mid]){

//                high=mid-1;

//            }

//            else{

//                low=mid+1;

//            }

//        }

//        else{

//            if(arr[mid]<key and arr[high]>=key){

//                low=mid+1;

//            }

//            else{

//                high=mid-1;

//            }

//        }

//    }

//    if(arr[low]==key) return low;

//    else

//        return -1;
    
}
