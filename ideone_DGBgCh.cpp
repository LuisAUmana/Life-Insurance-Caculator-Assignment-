#include <iostream>        
using namespace std;

int main() {
int policyAmnt = 500000;
char condition;
int premium = 250;
int age;



   cout <<"Do you have any pre exisitng condition? (y or n)"<< endl;
   cin>>condition;
   
   cout<< "What is your Age?"<<endl;
   cin>>age;
   cout<<age<<endl;
   
   
   if ( age >=20 ){
      premium= (policyAmnt/2000);
   }
   else if (age <=39){
      premium = (policyAmnt/1000);
   }
  else if (age <=59){
      premium = (policyAmnt/800);
  }
  else if (age >=60){
      premium = (policyAmnt/500);
  }
 
  premium = (condition =='y') ? premium*2:premium*1;
   cout<<premium;
   
   
   
   
   return 0;
}