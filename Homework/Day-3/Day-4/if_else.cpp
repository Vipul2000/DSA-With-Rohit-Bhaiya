/*1.Two numbers are given, print the bigger number, It is given that both numbers can’t be the same.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int num1=20, num2=10;
     if(num1>num2){
          cout<<"greater";
     }
     else{
          cout<<"smaller";
     }
     return 0;
}

2.Age of a person is given, print Adult if his/her age is greater than 18, otherwise print Teenager.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int age = 16;
     if(age>18){
          cout<<"He is an adult";
     }
     else{
          cout<<"He is teenager";
     }
     return 0;
}

3.Take a number in input (ex n) and print the corresponding month to it. Ex: for n=1, print january, n=2, print feburary like this you need to give output. It is given that n will be greater than 0 and less than 13.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int n;
     cin>>n;
     if(n==1){
          cout<<"January";
     }
     else if(n==2){
          cout<<"Feburary";
     }
     else if(n==3){
          cout<<"March";
     }
     else if(n==4){
          cout<<"April";
     }
     else if(n==5){
          cout<<"May";
     }
     else if(n==6){
          cout<<"June";
     }
     else if(n==7){
          cout<<"July";
     }
     else if(n==8){
          cout<<"August";
     }
     else if(n==9){
          cout<<"September";
     }
     else if(n==10){
          cout<<"October";
     }
     else if(n==11){
          cout<<"November";
     }
     else if(n==12){
          cout<<"December";
     }
     else{
          cout<<"Invalid Month";
     }

     return 0;
}

4.Ticket Price Calculator: Create a program that asks the user for their age and checks if they qualify for a discounted ticket price (e.g., under 12 and over 65 get discounts), If they are eligible print “YES” else “NO”.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
     int age;
     cout<<"Enter age: "<<endl;
     cin>>age;

     if(age<12){
          cout<<"Yes,you are eligible for discount"<<endl;
     }
     else if(age>65){
          cout<<"Yes,you are eligible for discount"<<endl;
     }
     else{
          cout<<"No, you are not eligible for discount"<<endl;
     }
     return 0;
}*/