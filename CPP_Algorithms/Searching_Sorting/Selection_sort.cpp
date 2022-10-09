// In the selection sort we have to follow following steps
// There will be total (N - 1) passes where N = size of the array
// In every pass as per name of alogorithm we have to select minimum value in every pass
// After selecting the minimum value of every pass we have to just swap it with front element 
// And at last we will get the sorted array.

// So, one thing is in Selection Sort we have (n - 1) passes and every pass we have to swap the 
// minimum element 

// So basically we will have array divided in the two parts : sorted array and unsorted array
// And every pass we have to select element from unsorted array and swap it


// In every round smallest element takes the correct place in the swap

void selectionSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[minIndex]) 
                minIndex = j;
        }
        swap(arr[i], arr[minIndex]);
        
    }
}