#include <iostream>
using namespace std;




class num{
int val;

public:
	void odd_even(int x){
    if(x%2==0)
    	cout<<"even";
    else
    	cout<<"odd";
	}

};




int main(){

num n1;
int n1_val;
cout<<"enter no \n ";
cin>>n1_val;
n1.odd_even(n1_val);
return 0;
}