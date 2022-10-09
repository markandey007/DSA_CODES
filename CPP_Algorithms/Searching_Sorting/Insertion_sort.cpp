// Algorithm used for Insertion Sort
// In this we are shifting larger element to the right side
// and in every round we are copying smaller element to the left side and 
// rest element are shifted towards the right side


void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i = 1; i < n; i++) {
        int j = i - 1;
        int temp = arr[i];
        for(; j >= 0; j--) {
            if(arr[j] > temp) 
                arr[j+1] = arr[j];
            else {
                break;
            }
        }
        arr[j+1] = temp;
    }
}