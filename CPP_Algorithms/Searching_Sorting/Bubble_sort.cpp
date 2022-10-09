// Bubble Sorting Algorithm

// In the every round the largest element gets its proper place at the right.
// In every round swapping is done if left element is greater than the right element
// Like this in each round maximum element is placed at the right most side

// Means bigger element bubbles up at the right most side.

// Here also we will have sorted array and unsorted array as two parts in the array

// ith largest element is placed at its proper place in the right side of the array

// Here also we will required (n - 1) rounds 

// as in every round we will be having sorted array part so next loop don't need to go to n - 1

void bubbleSort(vector<int>& arr, int n)
{   
    // Write your code here.
    for(int i = 1; i < n; i++) {
        for(int j = 0; j < n - i; j++) {
            if(arr[j] > arr[j+1]) 
                swap(arr[j], arr[j+1]);
        }
    }
    
}
