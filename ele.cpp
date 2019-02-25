

#include<iostream>
#include<stdlib.h>

using namespace std;

class bill
{
    public:
    int unit;    
    int amt;


    bill(){unit = 0; amt=0;} 

 
 
    void cal_bill(){
     if(unit <= 100)
        amt=unit*0.60;
    else if(unit >100 && unit <301)
        amt=unit*0.80;
    else if(unit>300)
        amt=unit*0.90;
    
   
    
    amt=amt+50;   

    if(amt>3000)
        amt=(amt*1.15);

    }



    void print() { cout <<unit << " units    Rs." <<amt<< endl; } 
};

int main()
{
   bill b;

   
        int u;
        cout<<"\n\n\tEnter no of units choice : ";
        cin>>u;
         b.unit=u;
         b.cal_bill();
         b.print();


}