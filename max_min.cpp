// finding max and min number in O(1) time
#include<iostream>
using namespace std ;
main() {
    int x, y ;
    cout<<"Enter two number " ;
        cin>>x>>y ;
    int min = ((x+y)-(x-y))/2 ; 
    int max =((x+y)+(x-y))/2 ;

    cout<<"max is " <<max ; 
    cout<<endl ; 
    cout<<"min is "<<min ; 
}