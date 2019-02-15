

#include <iostream>
#include <cmath>
using namespace std;




class fnum{
int val;

public:

	void roots(int x,int y,int z){
    int b=y;
    int a=x;
    int c=z;
   int d=(y*y)-(4*a*c);
   if(d>0){
    int x1=(-b+sqrt(d))/2*a;
    int x2=(-b-sqrt(d))/2*a;
    cout<<"  roots "<<x1<<"   "<<x2;
    }
   else if(d==0){
   int x11=(-b)/2*a;
    int x22=(-b)/2*a;
    cout<<"  roots "<<x11<<"  "<<x22;
   }
   else if(d<0){
    int x1r=(-b)/2*a;
    int x2r=(-b)/2*a;

    int x1i=sqrt(-d)/2*a;

    cout<<"  roots "<<x1r<<"+  i"<<x1i;
    cout<<"  roots "<<x1r<<"-  i"<<x1i;
    
    }

	}

};



int main(){

int a,b,c;
cout<<"enter a\n ";
cin>>a;
cout<<"enter b \n ";
cin>>b;
cout<<"enter c\n ";
cin>>c;
fnum k;
k.roots(a,b,c);


}