#include <bits/stdc++.h>
using namespace std;
int main(){
    stack <int>st;
for(int i=2; i<10; i++){
st.push(i);
}
for(int i=0; i<10; i++){
cout<<st.top();
st.pop();
}

}