//Check Permutation

#include <bits/stdc++.h>
using namespace std;

bool isPermutation(char input1[], char input2[]) {
    int len1=strlen(input1);
    int len2=strlen(input2);

    if(len1!=len2){
        return false;
    }

    int i,j,count=0;
    for(i=0;i<len1;i++){
        for(j=0;j<len2;j++){
            if(input1[i]==input2[j]){
                count++;
               

            }
        }

    }

    if(count==len1){
        return true;
    }

    else{
        return false;
    }
}

int main() {
    char input1[1000], input2[1000];
    cin.getline(input1, 1000);
    cin.getline(input2, 1000);
    if(isPermutation(input1, input2) == 1) {
        cout << "true";
    }
    else {
        cout << "false";
    }
}

