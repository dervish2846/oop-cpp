#include<iostream>
#include<stdio.h>
using namespace std;

class Database {
    char name[25],type[25];
    int acc_no,balance;
    public:
    void getData() {
        cout<<"Enter details ";
        cout<<"name: ";
        cin.get(name,25);
        cout<<"account No: ";
        cin>>acc_no;
        getchar();
        cout<<"type of account: ";
        cin.get(type,25);
    }
    void depositAmt() {
        cout<<"Enter the balance amount: ";
        cin>>balance;
    }

    void withdrawAmt(int amt) {
        if(amt < balance) {
            balance = balance - amt;
            cout<<"Amount has been deducted\n";
        }
        else 
            cout<<"Amount exceeds the balance\n";
    }

    void displayData() {
        cout<<"\n \n ";
        cout<<">>>>>>>>>>>"<<name<<"     ::::::::::::::::   Rs."<<balance<<"\n";
    }
};

int main(void) {
    int amt;
    Database v;
    v.getData();
    v.depositAmt();
    v.displayData();
    cout<<">>>>>>Enter the amount to withdraw: ";
    cin>>amt;
    v.withdrawAmt(amt);
    v.displayData();
    return 0;
}