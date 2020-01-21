//status = "ONE-NIGHT-STAND";
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
 int age,height,asset;
 string status;
 cout << "How old are You ? : ";
 cin >> age;

if(age<=20){
    cout << "Enter Your Height : ";
    cin >> height;
     if (height<160)
     {
        status="UNFRIEND";
     }else if (height<175)
     {
         status="FRIEND";
     }else{
         cout << "Enter your value of asset : ";
         cin >> asset ;
          if (asset>69*pow(10,6)){
              status="MARRIED";
          }else{
              status="ONE-NIGHT-STAND";
          }
     }
}else if (age<30){
     cout << "Enter your value of asset : ";
         cin >> asset ;
          if (asset>10*pow(10,6))
          {
              status="BEST FRIEND";
          }else
{
              status = "UNFRIEND";
}        
}else
{
              status = "UNFRIEND";
}

cout << status ; 



/*if (age<=20)
{
    cout << "How tall you are ? : ";
    cin >> height ; 
  if (height<160)
  {
      status="UNFRIEND";
  }else if(height<175)
  {
      status="FRIEND";
  }else
  {
      cout << "How much money do you have ? : ";
      cin >> treasure;
        if (treasure > 69*pow(10,6))
        {
            status="MARRIED";
        }else
        {
            status="ONE-NIGHT-STAND";
        }      
  }
}
*/

}