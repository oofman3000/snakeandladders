/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: User
 *
 * Created on 30 April 2023, 1:31 PM
 */
#include <iostream>
#include <cstdlib>
#include<ctime>
#include <string>
using namespace std;
void printboard(string arr[100]){
    int temp=0 ;
    for(int i =0 ; i<10 ; i++){
        if (i%2==0){
            for (int j=0 ; j < 10; j++){
                cout<<" "<<arr[i*10+j]<<"|";
            }
            cout << endl;
           cout<<"-----------------------------------------"<<endl;
        }
        else{
            for (int k=9; k>=0 ; k--){
                cout<<" "<< arr [i*10 + k]<< "|";
            }
            cout<< endl ;
             cout<<"-----------------------------------------"<<endl;
        }
    }
    cout<<"ladders  | portals  "<<endl;
     cout<<"------------------ "<<endl;
     cout<<"4 to 25  |     30  "<<endl;
     cout<<"21 to 39 |     47  "<<endl;
     cout<<"29 to 74 |     59  "<<endl;
     cout<<"43 to 76 |     73  "<<endl;
     cout<<"63 to 80 |     82  "<<endl;
     cout<<"71 to 89 |     92  "<<endl;
     cout<<"   --    |     98  "<<endl;
     cout<<"   --    |     95  "<<endl;
     cout<<"   --    |     75  "<<endl;
     
}
int main() {
cout<<"************WELCOME TO LADDERS AND PORTALS********************"<<endl;
string temp1,temp2;
int temp3,temp4,temp5,temp6;
bool game_loop= 1 ;
char press ;
int pos_1=0, pos_2=0, dice;
string arr[100];
int counter=0;
for (int i=0 ; i<100 ; i++){
        if(i==98||i==82||i==92||i==73||i==59||i==47||i==30||i==19||i==15||i==95||i==75){
            arr[i]="🌀 ";
        }
        else if(i==4||i==21||i==29||i==43||i==63||i==71){
            arr[i]="🪜 ";
        }
        else if(i==0){
            arr[i]="🔥💧 ";
        }
        else {
        arr[i]=to_string(counter);
        }
        counter++;
    }
printboard(arr);
  while (game_loop==1){
      if(pos_1==pos_2){
          arr[pos_1]="💧 ";
      }
      else{
          arr[pos_1]=temp1;
      }
      cout<<"player 1 : press any letter to roll the dice:" ;
      cin >> press ;
      srand(time(0));
      dice = rand()%6 +1 ;
      switch (dice){
           case 1:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|     *     |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 2:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|   *  *    |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 3:
          cout<<"-------------"<<endl;
          cout<<"|         * |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|     *     |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *        |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 4:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break; 
          case 5:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|     *     |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 6 :
          cout<<"-------------"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"-------------"<<endl;
          break;
          
          
      }
      cout <<"you got number " << dice << " on the dice "<< endl;
      
      pos_1=pos_1+dice ;
      
      if(pos_1>99){
          temp3=pos_1;
          temp4=temp3-99;
          pos_1=99-temp4;
          
      }
      switch(pos_1){
          case 4:
          cout<<"You got ladder and promoted to 25"<<endl;
          pos_1=25;
          break;
          
          case 21:
          cout<<"You got ladder and promoted to 39"<<endl;
          pos_1=39;
          break;
          
          case 29:
          cout<<"You got ladder and promoted to 74"<<endl;
          pos_1=74;
          break;
          
          case 43:
          cout<<"You got ladder and promoted to 76"<<endl;
          pos_1=76;
          break;
          
          case 63:
          cout<<"You got ladder and promoted to 80"<<endl;
          pos_1=39;
          break;
          
          case 71:
          cout<<"You got ladder and promoted to 89"<<endl;
          pos_1=89;
          break;
          
      }
if(pos_1==98||pos_1==82||pos_1==92||pos_1==73||pos_1==59||pos_1==47||pos_1==30||pos_1==15||pos_1==19||pos_1==95||pos_1==75){
         pos_1=rand()%99;
         cout<<"You got a portal, you will be teleported to number "<< pos_1<<endl;
     }
    //string temp1;
    temp1=to_string(pos_1);
    if(pos_1==pos_2){
        arr[pos_1]="🔥💧 ";
    }
    else{
        arr[pos_1]="🔥 ";
    }
     printboard(arr);
     if (pos_1==99){
         cout<<"player1 wins the game ";
         break;
     }
      
      
      if(pos_2==pos_1){
          arr[pos_2]="🔥 ";
      }
      else{
          arr[pos_2]=temp2;
      }
    
      cout<<"player 2: press any letter to roll the dice:" ;
      cin >> press ;
      dice = rand()%6 +1 ;
      switch (dice){
           case 1:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|     *     |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 2:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|   *  *    |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 3:
          cout<<"-------------"<<endl;
          cout<<"|         * |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|     *     |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *        |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 4:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break; 
          case 5:
          cout<<"-------------"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|     *     |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"-------------"<<endl;
          break;
          case 6 :
          cout<<"-------------"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"|           |"<<endl;
          cout<<"|  *     *  |"<<endl;
          cout<<"-------------"<<endl;
          break;
          
          
      }
      cout <<"you got number " << dice << " on the dice "<< endl;
     
      pos_2=pos_2+dice ;
      
      if(pos_2>99){
          temp5=pos_2;
          temp6=temp5-99;
          pos_2=99-temp6;
          
      }
       switch(pos_2){
          case 4:
          cout<<"You got ladder and promoted to 25"<<endl;
          pos_2=25;
          break;
          
          case 21:
          cout<<"You got ladder and promoted to 39"<<endl;
          pos_2=39;
          break;
          
          case 29:
          cout<<"You got ladder and promoted to 74"<<endl;
          pos_2=74;
          break;
          
          case 43:
          cout<<"You got ladder and promoted to 76"<<endl;
          pos_2=76;
          break;
          
          case 63:
          cout<<"You got ladder and promoted to 80"<<endl;
          pos_2=39;
          break;
          
          case 71:
          cout<<"You got ladder and promoted to 89"<<endl;
          pos_2=89;
          break;
      }
     if(pos_2==98||pos_2==82||pos_2==92||pos_2==73||pos_2==59||pos_2==47||pos_2==30||pos_2==15||pos_2==19||pos_2==75||pos_2==95){
         pos_2=rand()%99;
         cout<<"you are in a portal, you will be teleported to number "<<pos_2<< endl;
     }
     //string temp2;
    temp2=to_string(pos_2);
     if (pos_2==pos_1){
         arr[pos_2]="🔥💧 ";
     }
     else {
         arr[pos_2]="💧 ";
     }
     printboard(arr);
     if (pos_2==99){
         cout<<"player2 wins the game";
         break;
     }
  }
    return 0;
}
