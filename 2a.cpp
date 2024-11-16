include<iostream>
using namespace std;
void main{
	int n;
	cout<<"nhap n so nguyen";
	cin>>n;
	for(int i=0;i<n;i++){
		if(i%2==0){
			cout <<"la so chan";
		}else cout <<"la so le";
	}
}
