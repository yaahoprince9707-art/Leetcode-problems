#include <iostream>
#include <stack>
using namespace std;
void  solve(stack<int> s, int count, int size)
{
    if (count == size / 2)
    {
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    solve(s, count + 1, size);
    s.push(num);

}
// stack<int> deleteAtMid(stack<int> ss,int size){
//     solve(ss,0,size);
//     return ss;
// }
int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    cout << "the deleted stack is :" << endl;
     solve(s,0,7);
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}