#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class first{
 int a;
 public:

 void set_a(int a){
  this->a=a;
 } 
 int get_a(){
  return a;
 }
};
first operator !(first obj){
 if(obj.get_a()%2==0){
  cout<<"\n\nIt is a even number\n\n";
 }
 else{cout<<"\n\nIt is a odd number \n\n";}
}
int main(){
 first obj;
 int num;
 cout<<"Enter a number :";
 cin>>num;
 obj.set_a(num);
 !obj;
}

