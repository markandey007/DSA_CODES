import java.util.ArrayList;

public class Linearsearch {
    public static void main(String[] args) {
        int[] nums = { 1, 2, 4,4,9,10 };
        ArrayList<Integer> list = linearSearch6(nums, 4,0);
        System.out.println(list);
    }

    // search in the array: return the index if item found
    // otherwise if item not found return -1
    static int linearSearch1(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }

        for (int index = 0; index < arr.length; index++) {
            // checks for element at every index is = target
            int element = arr[index];
            if (element == target) {
                return index;
            }
        }

        // This will execute when target is not found
        return -1;
    }

    // search the target and return the element
    static int linearSearch2(int[] arr, int target) {
        if (arr.length == 0) {
            return -1;
        }

        for (int element : arr) {
            if (element == target) {
                return element;
            }
        }

        // As -1 can be the element and in the array we return max value
        return Integer.MAX_VALUE;
    }

    // search the target and return true or false
    static boolean linearSearch3(int[] arr, int target){
        if(arr.length == 0){
            return false;
        }

        for (int index = 0; index < arr.length; index++) {
            // checks for element at every index is = target
            int element = arr[index];
            if(element == target){
                return true;
            }
        }

        // This will execute when target is not found
        return false;
    }

    // Using recursion
    // Returning boolean value
    static boolean linearSearch4(int[] arr, int target,int index){
        if(index == arr.length){
            return false;
        }
        return arr[index] == target || linearSearch4(arr, target, index+1);
    }

    // Returning index value
    static int linearSearch5(int[] arr, int target,int index){
        if(index == arr.length){
            return -1;
        }
        if(arr[index] == target){
            return index;
        }
        return linearSearch5(arr, target, index+1);
    }

    // Multiple Occurance of target in using Linear Search
    static ArrayList<Integer> list = new ArrayList<>();
    static void linearSearch6(int[] arr, int target, int index){
        if(index == arr.length){
            return;
        }
        if(arr[index]==target){
            list.add(index);
        }
        linearSearch6(arr, target, index+1);
    }

    // ArrayList as argument
    static ArrayList<Integer> linearSearch7(int[] arr, int target, int index, ArrayList<Integer> list){
        if(index == arr.length){
            return list;
        }
        if(arr[index]==target){
            list.add(index);
        }
        return linearSearch7(arr, target, index+1, list);
    }

    // ArrayList without passing as argument
    // not a optimized function as everytime new arraylist is created
    static ArrayList<Integer> linearSearch8(int[] arr,int target, int index){
        ArrayList<Integer> list = new ArrayList<>();
        if(index==arr.length){
            return list;
        }
        if(arr[index]==target){
            list.add(index);
        }

        ArrayList<Integer> ansfrombelow = linearSearch8(arr, target, index+1);
        list.addAll(ansfrombelow);

        return list;
    }
}
