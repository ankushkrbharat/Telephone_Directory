#include<stdio.h>
#include <iostream>
#include<vector>
#include <fstream>

using namespace std;

struct contact{
    string name;
    string phone;
};

vector<contact> Directory;



void addContact() {
    contact c;
    string n,p;
    cout<<"Enter name : ";
    cin>>n;
    c.name=n;
    cout<<"Enter phone : ";
    cin>>p;
    c.phone=p;
    Directory.push_back(c);
}

void readAll(){
    if(Directory.empty()==1){
        cout<<"No Contacts";
    }
    
    for (auto co:Directory){
        cout<<"Name:"<<co.name<<"\t"
        <<"Phone:"<<co.phone<<"\n";
    }
}

void findContact(string name){
    for (auto co:Directory){
        if (co.name==name){
            cout<<co.phone;
            return;
        }
    }
    cout<<"Not Found";
}



int main() {
    addContact();
    addContact();
    readAll();
    findContact("abc");

    return 0;
}