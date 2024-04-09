//2. Create a program to print the multiplication table of a given number. 

#include<iostream>
using namespace std;
void multiplication(int a){
   
   for(int i=1;i<=10;i++){
   
          cout<<i*a<<endl;
           
       
   }
    
}
int main(){
    int c;
    cout<<"enter numbert to want be print the multiplication ";
    cin>>c;
    
    multiplication(c);
    return 0;
}