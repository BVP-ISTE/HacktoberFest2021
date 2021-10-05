#include<iostream>
using namespace std;

int add;

int sum(int input[], int n) {
  if (n <= 0)
        return 0;
    return (sum(input, n - 1) + input[n - 1]);


}


int main(){
    int n;
    cin >> n;
  
    int *input = new int[n];
    
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    cout << sum(input, n) << endl;
    return 0;
}


