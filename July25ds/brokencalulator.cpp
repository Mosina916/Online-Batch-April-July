#include<iostream>
using namespace std;


void multiply(int *arr,int &numberofdigitstoiterate,int no){ //4

	int carry=0;
	for(int j=0;j<numberofdigitstoiterate;j++){
		int product=arr[j]*no+carry; //2*10+2=12
		arr[j]=product%10; //12%10;//2
		carry=product/10;//12/10//1

	}
	// j=2


	// numberofdigitstoiterate=1;
	while(carry){
	arr[numberofdigitstoiterate]=carry%10;//1%10=1
	carry=carry/10; //1/10=0
	numberofdigitstoiterate++; //2

	}
	






}


void fact(int n){

	int arr[1000]={0}; //every bucket will contain 0
	// for(int i=0;i<1000;i++){
	// 	arr[i]=0;

	// }


	arr[0]=1;
	int numberofdigitstoiterate=1;
	for(int i=1;i<=n;i++){
		multiply(arr,numberofdigitstoiterate,i);

	}


	// print ans


	for(int i=numberofdigitstoiterate-1;i>=0;i--){
		cout<<arr[i];
	}

	cout<<endl;




}
int main(){
	int n;
	cin>>n; //5

	fact(n);




	return 0;
}