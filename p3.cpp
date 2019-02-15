

#include <iostream>
using namespace std;




class fnum{
int val;

public:

	void gen_series(int x){
    
    int f1=0,f2=1;
    int f3;

    while(f1<x){
    cout<<f1<<"     ";  
    f3=f1+f2;
    f1=f2;
    f2=f3;
    
    

    }
   

	}

};



int main(){



fnum n1;
int n1_val;
cout<<"enter no \n ";
cin>>n1_val;
n1.gen_series(n1_val);



return 0;
}