#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void print(int arr[],int n)
{
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
	
}

int power(int x,int n)
{
    if(x==0) return 0;
    if(n==0) return 1;
    int smallOutput = power(x,n-1);
    return x*smallOutput;
}

void printNums(int n)
{
    if(n==0) return;
    printNums(n-1);
    cout<<n<<" ";
}

int digits(int n)
{
    if(n<=0) return 0;
    if(n<10) return 1;
    int smallOutput = digits(n/10);
    return 1 + smallOutput;
}

int Fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    int smallOutput = Fibo(n-1)+Fibo(n-2);
    return smallOutput;
}

int sumOfArray(int arr[],int n)
{
    if(n==0) return 0;
    if(n==1) return arr[0];
    int smallOutput = sumOfArray(arr+1,n-1);
    return arr[0]+smallOutput;
}

bool present(int arr[],int n,int x)
{
    if(n==0) return false;
    if(n==1 && arr[n-1]==x) return true;
    else if(arr[0]==x) return true;
    else return present(arr+1,n-1,x);
}

int multiply(int x,int y)
{
    if(y==0) return 0;
    return (x+multiply(x,y-1));
}

float geo(int k)
{
    if(k==0) return 1;
    return ((float)(1/pow(2,k)) + geo(k-1));
}

bool palindromeHelper(string s, int low,int high)
{
    if(high<=low) return true;
    if(s[low]!=s[high]) return false;
    return palindromeHelper(s,low+1,high-1);
}
bool checkPalidrome(string s)
{
    return palindromeHelper(s,0,s.size()-1);
}

int sumOfDigits(int n)
{
    if(n<10) return n;
    else return (n%10 + sumOfDigits(n/10));
}

void replace(char input[],int n,string &ans)
{
    if(n<=0) return;
    if(n==1)
    {
        ans+=input[n-1];
        return;
    }
    
    if(input[0]=='p' && input[1]=='i')
    {
        ans+="3.14";
        replace(input+2,n-2,ans);
    }
    else{
    ans+=input[0];
    replace(input+1,n-1,ans);
    }
}

int toInteger(string s,int n)
{
    if(n==1) return s[0]-'0';
	int a = toInteger(s,n-1);
    return a*10+(s[n-1]-48);
}

void separate(string s,string &ans)
{
	if(s.length()==1)
	{	
		 ans+=s[0];
		 return;
	} 
	if(s[0]==s[1]) ans = ans + s[0] + '*';
	else ans+=s[0];
	separate(s.substr(1),ans);
}

void ToH(char source,char target,char aux,int n)
{
	if(n==0) return;
//	cout<<"Move first "<<n-1<<" rods from "<<source<<" to "<<aux<<endl;
	ToH(source,aux,target,n-1);
	cout<<"Move rod "<<n<<" from "<<source<<" to "<<target<<endl;
	ToH(aux,target,source,n-1);
}

void removeDuplicates(char arr[])
{
	if(arr[0]=='\0' || arr[1]=='\0') return;
	if(arr[0]==arr[1])
	{
		int i=1;
		for(;arr[i]!='\0';i++)
		arr[i-1]=arr[i];
		arr[i-1]='\0';
		removeDuplicates(arr);
	}
	else removeDuplicates(arr+1);
}

void Merger(int arr[],int start,int end,int mid)
{
	cout<<"HERE"<<start<<" "<<end<<endl;
	if(end<=start) return;
	int i=start;
	int mid = (start+end)/2;
	int j = mid+1;
	int temp[end];
	int k=start;
	
	while(i<=mid && j<=end)
	{
		if(arr[i]<arr[j])
		{
			temp[k++] = arr[i];
			i++;
		}
		else
		{
			temp[k++] = arr[j];
			j++;
		}
	}

	while(i<=mid)
	temp[k++]=arr[i++];
	
	while(j<=end)
	temp[k++]=arr[j++];
	
		cout<<"HELLO"<<endl;
	for(int i=start;i<=end;i++)
	arr[i]=temp[i];
	print(arr,end-start+1);
}

void Divide(int arr[],int low, int high)
{
	
	if(low>=high) return;
	int mid = (high+low)/2;
	Divide(arr,low,mid);
	Divide(arr,mid+1,high);
	Merger(arr,low,high,mid);
}
void mergeSort(int arr[],int n)
{
	if(n==0 || n==1) return;
	return Divide(arr,0,n-1);
}
 	void quickSort(int arr[], int low, int high)
    {
        if(low>=high) return;
        int index = partition(arr,low,high);
        quickSort(arr,low,index-1);
        quickSort(arr,index+1,high);
    }

    int partition (int arr[], int low, int high)
    {
        int count=0;
        for(int i=low+1;i<=high;i++)
        {
            if(arr[i]<arr[low]) count++;
        }
        int index = low+count;
        swap(arr[low],arr[low+count]);
        int i = low;
        int j = high;
        while(i<j)
        {
            while(arr[i]<arr[index]) i++;
            while(arr[j]>arr[index]) j--;
            if(i<=j) swap(arr[i],arr[j]);
        }
        return index;
    }
    

int sub(char arr[],int n,string ans[])
{
	if(n==0) 
	{
		ans[0]=" ";
		return 1;
	}
	int output = sub(arr+1,n-1,ans);
	for(int i=0;i<output;i++)
	{
		ans[output+i]=arr[0]+ans[i];
	}
	return output*2;
}

string options[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

//void PrintkeyPad(int input,string output)
//{
//	if(input<=1)
//	{
//		cout<<output<<endl;
//		return;
//	}
//	string temp = options[input%10];
//	int n = temp.size();
//	for(int i=0;i<n;i++)
//	PrintkeyPad(input/10,temp[i]+output);
//}

//StepCase
//int Helper(int curr,int n)
//{
//	if(curr>n) return 0;
//	if(curr==n) return 1;
//	int One = Helper(curr+1,n);
//	int Two = Helper(curr+2,n);
//	int Three = Helper(curr+3,n);
//	return One+Two+Three;
//}
//int Step(int n)
//{
//	Helper(0,n);
//}

//Binary Search
//int binaryHelper(int arr[],int low,int high,int target)
//{
//	if(low>high)
//	return -1;
//	
//	int mid = (high)+(low-high)/2;
//	if(arr[mid]==target) return mid;
//	else if(arr[mid]>target) binaryHelper(arr,low,mid-1,target);
//	else binaryHelper(arr,mid+1,high,target);
//	return -1;
//}
//int binarySearch(int arr[],int n,int target)
//{
//	mergeSort(arr,n);
//	binaryHelper(arr,0,n-1,target);
//}
//
//int subset(int arr[],int n, vector<vector<int>> &v)
//{
//	if(n==0)
//	 return 0;
//	int size = subset(arr,n-1,v);
//	vector<int> temp;
//	for(int i=0;i<size;i++)
//	{
//		temp = v[i];
//		temp.push_back(arr[n-1]);
//		v.push_back(temp);
//	}
//	return 2*size;
//}
//
string demo = " abcdefghijklmnopqrstuvwxyz";
void print(int n,string output)
{
	if(n<=0)
	{
		cout<<output<<endl;
		return;
	}
	int small = n%10;
	int medium= n%100;
	print(n/10,demo[small]+output);
	if(medium>=10 && medium<=26)
	print(n/100,demo[medium]+output);
}
#include<string>
//void printPermutation(string input,int n,string output)
//{
////	cout<<"OUTPUT: "<<output<<endl;
//
//	printPermutation(input+1,n-1,)
//	
//}

void Permutation(string input,int n,string output)
{
	if(n<=3)
	{
		cout<<output<<endl;
		return;
	}
	for(int i=0;i<input.size();i++)
	{
		Permutation(input.substr(0,i)+input.substr(i+1,n),n-1,output);	
		output = input[i] + output;	
	}
}
int main()
{
	Permutation("abc",3,"");
//	print(2713,"");
//	string ans[100];
//	int n = Codes(123,ans);
//	for(int i=0;i<n;i++)
//	cout<<ans[i]<<endl;
//	int arr[] = {1,2,3};
//	vector<vector<int>> v;
//	int n = subset(arr,3,v);
//int arr[]={1,6,7,8,2,11,22,12,9,10};
//int n = 10;
//cout<<binarySearch(arr,n,10);
//cout<<Step(5)<<endl;
//	string ans[100];
//	PrintkeyPad(234," ");
////	char arr[]={'a','b','c','d'};
//	int n = sub(arr,4,ans);
//	int n = keyPad(23,ans);
//	for(int i=0;i<n;i++)
//	cout<<ans[i]<<endl;
//	int arr[]={5,4,3,2,1,6,7,8,9,10};
//	mergeSort(arr,10);
//	print(arr,10);
//	string ans = "";
//	separate("Hello",ans);
//	cout<<ans;	
    // cout<<sumOfDigits(17491);
    // cout<<power(3,4);
    // printNums(10);
    // cout<<digits(102001)<<endl;
    // cout<<Fibo(5);
    // int arr[5] = {1,2,3,4,5};
    // cout<<sumOfArray(arr,5);
    // cout<<present(arr,5,11);
    // cout<<multiply(9,5);
    // cout<<geo(3);
    // cout<<checkPalidrome("HELLELEH");  
    // string s= "";
    // char arr[] = {'i','p','i','4','p','i','p'};
    // replace(arr,7,s);
    // cout<<s;
    //    cout<<toInteger("1234321",7);
   //   ToH('a','b','c',4);
  //	char arr[100];
 //	cin>>arr;
 //	removeDuplicates(arr);
  //	cout<<arr;
    return 0;
}

//Subsets of the integer array

//#include <iostream>
//#include <bits/stdc++.h>
//using namespace std;
 
int subset(int arr[],int n, vector<vector<int>> &v)
{
	if(n==0)
	{
	 v.push_back({});   
	 return 1;
	}
	int size = subset(arr,n-1,v);
	vector<int> temp;
	for(int i=0;i<size;i++)
	{
		temp = v[i];
		temp.push_back(arr[n-1]);
		v.push_back(temp);
	}
	return 2*size;
}


//Printing the subsets

void subset(int arr[],int n, vector<int> v)
{
	if(n==0)
	{
	    for(auto i:v)
	    cout<<i<<" ";
	    cout<<endl;
	    return;
	}
	vector<int> temp = v;
	temp.push_back(arr[0]);
	subset(arr+1,n-1,temp);
	subset(arr+1,n-1,v);
}

int main()
{
	int arr[] = {1,2,3};
	vector<vector<int>> v;
	int n = subset(arr,3,v);
	for(int i=0;i<n;i++)
	{
	    for(auto j: v[i])
	    cout<<j<<" ";
	    cout<<endl;
	}
}
