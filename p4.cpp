#include <iostream>
using namespace std;




class fnum{
int val;

public:

	void gen_series(int x,int z){
    
    int i,j;
    int f;
    for (int i = x; i <=z; i++)
    {
        int f=0;
       for (int j = 1; j <=i; j++)
       {
           
        if(i%j==0)
            f=f+1;  
           
       }
       if(f==2)
        cout<<i;
        
    }
    
    

    
   

	}

};



int main(){



fnum n1;
int n1_val,n2_val;
cout<<"enter no 1 \n ";
cin>>n1_val;
cout<<"enter no 2 \n ";
cin>>n2_val;
n1.gen_series(n1_val,n2_val);



return 0;
}