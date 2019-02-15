


#include <iostream>
using namespace std;




class num{
int val;

public:

	void is_pdrome(int x){
    int s=0;
     int l;
    int n=x;

    while(x!=0){
    l=x%10;
    s=s*10+l;
    x=x/10;
    }
   

   if(s==n)
   		cout<<"palindrome";
   	else
   		cout<<"not palindrome";

	}

};





int main(){



num n1;
int n1_val;
cout<<"enter no \n ";
cin>>n1_val;
n1.is_pdrome(n1_val);



return 0;
}