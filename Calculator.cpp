#include<iostream>
using namespace std;
int main(){
	
    float num1;
    float num2;
    char ch;
    cout<<"Enter the value of num1:";
    cin>>num1;
    cout<<"Enter the operation:";
    cin>>ch;
    cout<<"Enter the value of num2:";
    cin>>num2;
    if(ch=='+'){
    	cout<<"Addition is:"<<num1+num2<<endl;
	}
	else if(ch=='-'){
    	cout<<"Subtraction is:"<<num1-num2<<endl;
	}
    else if(ch=='*'){
    	cout<<"Multiplication is:"<<num1*num2<<endl;
	}
    else if(ch=='/'){
    	cout<<"Division is:"<<num1/num2<<endl;
	}
	else{
		cout<<"UNVALID OPERATION."<<endl;
	}
	
}
