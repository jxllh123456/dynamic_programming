#include<iostream>
#include<vector>
#include</Users/summer/dntctm/fibonacci>
using namespace std;

int main(){
 int input;
 while(cin >> input){
 unsigned output = fibonacci_dp(input);
 cout <<"output = " << output<< endl;
 }
 return 0;
}
