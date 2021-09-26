#include <iostream>
#include<stack>
using namespace std;

//write your code to reverse a stack using 1 helper stack only
//do not make changes to the code above thse lines
//complete this function to reverse the stack
//more than 1 function can be used if needed
void reverseStack(stack<int> &s1){

    
   
}

//all changes to be made in the above function only
//no changes to be made below this line

int main() {
     stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);

     reverseStack(s);
     while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
     }
}
