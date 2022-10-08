import java.util.*;
public class AllSort {

    //BUBBLE SORT

    public static void bubbleSort(int arr[])
    {
        int n = arr.length;
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-i-1;j++)
            {
                if(arr[j] > arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }

    //SELECTION SORT

    public static void selectionSort(int arr[])
    {
        int n = arr.length;
        for(int j=0;j<n;j++)
        {
            int minIndex = j;
            for(int i=j+1;i<n;i++)
            {
                if(arr[i] < arr[minIndex])
                {
                    minIndex = i;
                }
            }
            if(minIndex != j)
            {
                int temp = arr[j];
                arr[j] = arr[minIndex];
                arr[minIndex] = temp;
            }
        }
    }

    //INSERTION SORT

    public static void insertionSort(int arr[])
    {
        int n = arr.length;
        for(int i=1;i<n;i++)
        {
            int temp = arr[i], j = i;
            while(j>0 && arr[j-1]>temp)
            {
                arr[j] = arr[j-1];
                j--;
            }
            arr[j] = temp;
        }
    }

  //MERGE SORT

  public static void merge(int arr[], int left, int middle, int right)
  {
      int[] leftArray = new int[middle-left+2];
      int[] rightArray = new int[right-middle+2];
      for(int i=0;i<= middle-left;i++)
      {
          leftArray[i] = arr[left+i];
      }
      for(int i=0;i<right-middle;i++)
      {
          rightArray[i] = arr[middle+1+i];
      }

      leftArray[middle-left+1] = Integer.MAX_VALUE;
      rightArray[right-middle] = Integer.MAX_VALUE;

      int i=0,j=0;

      for(int k = left;k<=right;k++)
      {
          if(leftArray[i] < rightArray[j])
          {
              arr[k] = leftArray[i];
              i++;
          }
          else{
            arr[k] = rightArray[j];
            j++;
          }
      }
  }

  public static void MergeSort(int[] arr, int left, int right)
  {
      if(right>left)
      {
          int m= (left+right)/2;
          MergeSort(arr, left, m);
          MergeSort(arr, m+1, right);
          merge(arr, left, m, right);
      }
  }

  //QUICK SORT

public  static int partition(int arr[], int start, int end)
{
    int pivot = end;
    int i = start-1;
    for(int j=start;j<=end;j++)
    {
        if(arr[j] <= arr[pivot])
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    return i;
}

//HEAP SORT



  public static void quickSort(int arr[], int start, int end)
  {
    if(start < end)
    {
        int pivot = partition(arr, start, end);
        quickSort(arr, start, pivot-1);
        quickSort(arr, pivot+1, end);
    }

  }
  

    //print the array

    public static void printArray(int arr[])
    {
        int n = arr.length;
        for(int i=0;i<n;i++)
        {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
    public static void main(String[] args)
    {
        int[] arr = {5,4,2,8,7};
        printArray(arr);
        quickSort(arr,0,arr.length-1);
        printArray(arr);
    }
}
