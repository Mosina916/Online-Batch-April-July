#include<iostream>
using namespace std;
// syntax
// return type functionname(list of arguments){

// }
int facto(int n){
	// // base case
	if(n==0){
		return 1;

	}
	// if(n==1){
	// 	return 1;
	// }


	// recursive case //pure assumption
	// using above two steps find the ans
	int chotaans=facto(n-1); //24
	int badaans=n*chotaans; //120

	// char c='A';
	// return c;


	return badaans; //120 int


}
int main(){
	// create bucket n and take the value of n
	int n;
	cin>>n; //5
	cout<<"Factorial of "<<n <<" is "<<facto(n)<<endl; //argument



	return 0;
}