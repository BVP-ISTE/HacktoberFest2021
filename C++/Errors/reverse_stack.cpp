//
//  main.cpp
//  rotate linked list
//
//  Created by Apple on 26/09/20.
//  Copyright © 2020 Apple. All rights reserved.
//

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

//function to reverse stack
void reverseStack(stack<int>&input,stack<int>&extra){
    if(input.size()<=1){
        return;
    }
    int lastElement=input.top();
    input.pop();
    reverseStack(input,extra);
    while(!input.empty()){
        int a=input.top();
        input.pop();
        extra.push(a);
    }
    input.push(lastElement);
    //error in the following loop
    while(!extra.empty()){
        int b=extra.top();
        extra.pop();
        input.push(b);
    }
}
//main function
int main(){
    stack<int>input;
    stack<int>extra;
    input.push(10);
    input.push(20);
    input.push(30);
    input.push(40);
    input.push(50);
    input.push(60);
    cout<<"Before Reverse: "<<endl;
    cout<<input.top()<<endl;
    reverseStack(input,extra);
    cout<<"After Reverse: "<<endl;
    cout<<input.top()<<endl;
}
