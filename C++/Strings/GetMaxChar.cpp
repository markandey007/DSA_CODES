#include <iostream>
using namespace std;
char getMaxCharacter(string s){
    int arr[26]={0};
    for(int i=0; i<s.length();i++){
        int number=0;
        if(s[i]>='a' && s[i]<='z'){
            number=s[i]-'a';
        }
        else{
            number=s[i]-'A';
        }
        arr[number]++;
    }
    int maxi=-1;
    int ans=0;
    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans=i;
            maxi=arr[i];
        }
    }
    char finalans='a'+ans;
    return finalans;
}
int main()
{
    string s;
    cin>>s;
cout<< getMaxCharacter(s)<<endl;
    return 0;
}