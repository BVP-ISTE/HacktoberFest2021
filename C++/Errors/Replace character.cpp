//Replace Character
#include <bits/stdc++.h>
using namespace std;


void replaceCharacter(char input[], char c1, char c2) {

    int i,count=0;
    for(i=0;input[i]!='\0';i++){
        count++;
    }
    int size=count;
    for(int j=0;j<size;j++){
        if(input[j]==c1){
            
        }
    }
}
int main() {
    char input[1000000];
    char c1, c2;
    cin >> input;
    cin >> c1 >> c2;
    replaceCharacter(input, c1, c2);
    cout << input << endl;
}

