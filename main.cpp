//1. Write a program to print the first 10 even numbers. 

#include<iostream>
using namespace std;
void even(int a){
    int count=1;
   for(int i=1;i<=a;i++){
       if(i%2==0 && count<=10){
           cout<<i<<" ";
           count++;
       }
   }
    
}
int main(){
    int c;
    cout<<"enter numbert to want be print the first 10 even numbers ";
    cin>>c;
    
    even(c);
    return 0;
}