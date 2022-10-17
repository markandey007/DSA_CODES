#include<iostream>
using namespace std;

bool isPossible(int arr[], int mid, int size, int n){

    int paratha = 0;
    for(int i = 0 ; i < size; i++)
    {
        int time = arr[i];
        int j = 1;
        while(time <= mid)
        {
                time = time + (arr[i]*j);
                paratha++;
                j++;
        } 
    }
    if( paratha >= n)
        return true;

    return false;
}

int timeForParathas(int arr[], int n, int size){

    int s = 0;
    int e = arr[0]*(((n)*(n+1))/2);
    int mid = s + (e-s)/2;
    int ans = -1;
    while( s<=e )
    {
        if(isPossible(arr,mid,size,n)){
            ans = mid;
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){

    int cook[5] = {1,2,3,4,4};
    int size = sizeof(cook)/sizeof(cook[0]);
    int paratha = 10;
   // cout << " Enter how much paratha you want :- ";
    //cin >> paratha;
    cout << endl;
    //cout<< " maximum time for one cook :-"<< cook[0](((paratha)(paratha+1))/2);

    cout << "Total time for making " << paratha << " parathas :- " << timeForParathas(cook,paratha,size)<<endl;

    return 0;
}