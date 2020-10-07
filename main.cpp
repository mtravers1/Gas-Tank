#include <iostream>
#include <stack>
#include <fstream>
#include <sstream>
using namespace std;
stack <char> tank;
char item = 'X';
int t =0;
int main () {
   
    ifstream readfile("gas.txt");
    if(readfile.is_open()){
        string line;
        while(getline(readfile,line)){
            cout<<line<<endl;
            stringstream geek(line);
            geek >> t;
        }}
            for(int count =1; count <=t; count++){
                tank.push(item);
            }
 
  do {
   
 
   cout << "Gas Tank Control System\n\n";
  
  
   cout << "Menu\n";
   cout << "1. Fill Tank\n";
  
   cout << "2. Remove From Tank\n";
  
   cout << "3. Show Tank\n";
 
   cout << "4. Exit\n";
   int choice;
   cin >> choice;
   if(choice >= 4)
   {
      /* ofsteam file;
       file.open("gas.txt");
       file <<t;
       file.close();*/
    break;
   }
  
   else if(choice == 1) {
       if(tank.size()<3){
       tank.push(item);
       cout<<"gas has been added to tank"<<endl;
       t++;
       }
   else{ cout<<"tank is full"<<endl;}
   }  
            
   else if(choice == 2) {
      
       if(tank.size()>0){
           tank.pop();
       cout<<"Tank is removed"<<endl;
       t--;
       }
       
         else{cout<<"Tank is empty"<<endl;}
   }
  
  
   else if(choice == 3) {
       cout<<"Tank"<<endl;
       cout<<"-------------------"<<endl;
         for(int i=3; i >=1; i--){
         if(i>tank.size()){
             cout<<" "<<endl;
         }
        else{
            cout<<item<<endl;
   }
         }}
  } while(true);
 
  return 0;
 }
