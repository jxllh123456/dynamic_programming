#include<iostream>
#include<vector>
#include</Users/summer/dntctm/coins>

using namespace std;

int main(){
 int n;
 while(cin>>n){
 int result = coincharge_dp(n);
 cout << "min we need coins number is:"<< result << endl;
} 
 return 0;
}
