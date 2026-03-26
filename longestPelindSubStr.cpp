#include<iostream>
#include<string>
using namespace std;
int main(){
    string s,temp;
    char s1[]="hhgfhgd";
    cout<<"enter the string :";
    cin>>s;
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl;
    s="\0";
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    cout<<endl<<"hi";
    return 0;
}