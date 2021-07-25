#include<iostream>
using namespace std;
int digits(int no){
	int co=0;
	while(no!=0){
		co++;
		no=no/10;
	}
	return co;
}
int main(){
	int t,arr[200],n;
	cin>>t;
	while(t--){
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			cin>>arr[i];
		}

		//97 763 73 42
		for(int i=0;i<=n-2;i++){
		for(int j=0;j<=n-2-i;j++){
			int fn= arr[j];//97
			int sn=arr[j+1];//763

			int digitsinfn=digits(fn);
			int digitsinsn=digits(sn);


			long long int no1=fn*pow(10,digitsinsn)+sn;
			long long int no2=sn*pow(10,digitsinfn)+fn;
			if(no1>no2){
				swap(arr[j],arr[j+1]);
			}


		}

	}
	for(int i=n-1;i>=0;i--){
		cout<<arr[i];
	}
	cout<<endl;


	}

	return 0;
}