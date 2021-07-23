#include<iostream>
#include<stack>
using namespace std;
int main(){
    int n;
    scanf("%d",&n);
    stack<int> st;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        st.push(a);
    }   
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    printf("\nNew project!");
}
