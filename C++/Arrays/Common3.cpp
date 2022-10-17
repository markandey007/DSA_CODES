#include <bits/stdc++.h>
using namespace std;
void printarray(int arr[], int n){
    cout<<"Printing Array ->";
    for (int i=0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
}
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
int i=0,j=0,k=0;
            vector<int>ans;
            int prev1 , prev2 , prev3;
            prev1 = prev2 = prev3 = INT_MIN;

            while(i<n1 && j<n2 && k<n3){
                while(A[i]==prev1  && i<n1)
                i++;
                while(B[j]==prev2  && j<n2)
                j++;
                while(C[k]==prev3  && k<n3)
                k++;

                if(A[i]== B[j] && B[j]== C[k]){
                    cout<<A[i];
                    ans.push_back(A[i]);

                    prev1 =  A[i];
                    prev2 =  B[j];
                    prev3 =  C[k];

                    i++;
                    j++;
                    k++;
                }

                else if(A[i]< B[j])
                    {
                    prev1 = A[i];
                    i++;
                }
                 else if(B[j]< C[k])
                    {
                    prev2 = B[j];
                    j++;
                }
                else{
                    prev3= C[k];
                    k++;
                }
            }
            cout<<ans.size();
            return ans;
        }
        
   
int main(){
    int n1=6;
    int A[6]={1, 5, 10, 20, 40, 80};
    int n2=5;
    int B[5]={6, 7, 20, 80, 100};
    int n3=8;
    int C[8]={3, 4, 15, 20, 30, 70, 80, 120};
    vector<int>ans;
    ans=commonElements(A,B,C,n1,n2,n3);
    for(int i=0;i<ans.size() ; i++){
 cout<<ans[i]<<" ";
    }
    return 0;
}