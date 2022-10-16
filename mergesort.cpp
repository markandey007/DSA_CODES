// MERGE SORT IN CPP

# include<iostream>
using namespace std;

int merge(int numbers[], int l, int mid, int h){
	
	int s1=mid-l+1;
	int s2=h-mid;
	int A1[s1], A2[s2];
	for(int i=0; i<s1; i++){
		A1[i]=numbers[l+i];
	}
	
	for(int j=0; j<s2; j++){
		A2[j]=numbers[mid+1+j];
	}
	
	int n=l;
	int a1=0;
	int m=0;
	while(a1<s1 && m<s2){
		if(A1[a1]<=A2[m]){
			numbers[n]=A1[a1];
			a1+=1;
		}
		else{
			numbers[n]=A2[m];
			m+=1;
		}
		n+=1;	
	}
	
	while(a1<s1){
		numbers[n]=A1[a1];
		a1+=1;
		n+=1;
	}
	
	while(m<s2){
		numbers[n]=A2[m];
		m+=1;
		n+=1;
	}
}

void mergesort(int numbers[], int l, int h){
	// BASE CASE
	if(l>=h){
		return; 
	}
	
	if(l<h){
	int mid= (l+h)/2;
	mergesort(numbers, l, mid);
	mergesort(numbers, mid+1, h);
	merge(numbers, l, mid, h);
	}
}

int main(){
	
	int numbers[20], size;
	
	cout<<"ENTER THE SIZE OF LIST YOU WANT TO SORT";
	cin>>size;
	cout<<"ENTER THE NUMBERS";
	
	for(int i=0; i<size; i++){
		cin>>numbers[i];
	}
	mergesort(numbers, 0, size-1);
	cout<<"sorted list is: ";
	for(int i=0; i<size; i++){
		cout<<numbers[i]<<",";
	}
		
	return 0;
	
}