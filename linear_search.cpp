#include <iostream> 
using namespace std;

int main()
{
  // array[100] memory reserved in memory
  // amount is for how many loop is run 
  // new_value is search value
  // j is for temp variable
  int amount = 0,new_value=0,loc= 0,j,size;  
  cout <<"How Many Value You Want to inserted:";
  cin >>size;
  int array[100];
  // Inserting a New Array 
  
  cout <<"Insert a New Value into Array " <<endl; 

  for(int i=0;i<=size -1;i++) 
  {
    cout <<"Enter Value["<<i<<"]:";
    cin >> array[i]; 
    

     if(array[i] > 100)
    {
      cout <<"Overflow Occured"<<endl;
      return 1; 
    }
    else if (array[i] < 0) 
    {
      cout <<"Underflow Occured"<<endl;
      return 1; 
    }

      amount++;
    }

  cout <<"Total Entries:"<<amount<<endl; 

  // Current Arrray
  
  cout <<"Current Array"<<endl; 
  
  for(int i=0;i<=size;i++) 
  {
     cout <<array[i]<<endl;
  } 
 

  // this varabile is for choosing if u want to inserted new value or not 
  int choose;
  
  cout <<"Want to Search  element ?  [Enter 1] "; 
  
  cin >> choose; 

  // Checking conditions 
  if(choose == 1)
  {
    cout <<"Enter Your Value:";
    cin >> new_value;


    
      j = 0;
    while(j<amount) 
    {
      if(array[j] == new_value)
      {
        break; 
      }
      j = j+1;
    } 

    cout <<"Your Searched Item:"<<new_value<<" is at Index Number:"<<j<<endl;


    }
  // if choose value is other than 1 then this else will b run
  else
  {
    for(int i=1;i<=amount;i++) 
  {
     cout <<array[i]<<endl;
  } 
  }
  return 0;
}



/// Coded By Abid Gul Shahid
//  mailto: silencemind55@gmail.com
