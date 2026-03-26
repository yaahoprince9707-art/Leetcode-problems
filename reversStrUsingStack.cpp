#include<iostream>
#include<stack>
#include<string>
using namespace std;
    // class Stack{
    //     public:
    //      char *arr;
    //      int size;
    //      int top;
    //      Stack(int size){
    //          this->size=size;
    //          arr =new char[size];
    //          top = -1;
    //      }
    //      bool isEmpty(){
    //         if(top == -1){
    //             return true;
    //         }
    //         else{
    //             return false;
    //         }
    //      }
    //      void push(char ele){
    //         if((size - top )>1){
    //             top++;
    //             arr[top]=ele;
    //         }
    //         else{
    //             cout<<"stack is overflow "<<endl;
    //         }
    //      }
    //      void pop(){
    //         if(top>=0){
    //             top--;
    //         }
    //         else{
    //             cout<<"Stack is underflow"<<endl;
    //         }
    //      }
    //      char peek(){
    //         if(top>=0 && top<size){
    //             return arr[top];
    //         }
    //         else{
    //             cout<<"Stack is Empty"<<endl;
    //         }
    //      }
      

    // };
    int main(){
        string st;
        cout<<"enter the string : ";
        cin>>st;
        int l=st.size();
        stack<char> s;
        for(int i=0;i<l;i++){
            s.push(st[i]);
        }
        cout<<"the reversed strig is: ";
        for(int i=0;i<l;i++){
            cout<<s.top();
            s.pop();
        }

        return 0;
    }
    