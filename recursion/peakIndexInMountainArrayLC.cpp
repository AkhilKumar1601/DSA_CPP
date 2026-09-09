class Solution {
public:
    int peakElementIndex(vector<int>& arr,int s, int e) {
       if (s == e) return s;
   
       int mid = s + (e-s)/2;
   
       if ( arr[mid] < arr[mid+1]) return peakElementIndex(arr,mid+1,e);
       else return peakElementIndex(arr,s,mid);
    
    }     

    int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0;
        int e = arr.size() - 1;
        /*while ( s < e ) {
            int mid = s + (e-s)/2;
            if ( arr[mid] < arr[mid + 1]) s = mid + 1;
            else e = mid;
        }

        return s;*/

        return peakElementIndex(arr,s,e);
        

    }
};