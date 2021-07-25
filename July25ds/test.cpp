#include<iostream>
using namespace std;


// call by value-->naya bucket create hota hai

// void f(int y){
// 	y=y+40;

// 	cout<<"y inside function "<<y<<endl; //100

// }

 //creating refrence variable and changing the values
// void f(int &y){
// 	y=y+40;

// 	cout<<"y inside function "<<y<<endl; //100

// }


void f(int *y){
	*y=*y+40;

	cout<<"y inside function "<<*y<<endl; //100

	cout<<"y address "<<y<<endl; //

}






int main(){

	int x=60;

	cout<<"x inside main  function before updation"<<x<<endl; //60

	f(&x); //1000

	cout<<"x inside main  function after updation"<<x<<endl; //100


	cout<<"x address"<<&x<<endl; //100





	return 0;
}