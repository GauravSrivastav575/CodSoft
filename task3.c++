#include<bits/stdc++.h>
using namespace std;
void printtable(char arr[3][3]){
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl;
}
int checkwinner(char arr[3][3]){
  if((arr[0][0]==arr[0][1]) && (arr[0][1]==arr[0][2])){
    return arr[0][1];
  }
  else if((arr[1][0]==arr[1][1]) && (arr[1][1]==arr[1][2])){
    return arr[1][1];
  }
  else if((arr[2][0]==arr[2][1]) && (arr[2][1]==arr[2][2])){
    return arr[2][1];
  }
  else if((arr[0][0]==arr[1][0]) && (arr[1][0]==arr[2][0])){
    return arr[1][0];
  }
  else if((arr[0][1]==arr[1][1]) && (arr[1][1]==arr[2][1])){
    return arr[1][1];
  }
  else if((arr[0][2]==arr[1][2]) && (arr[1][2]==arr[2][2])){
    return arr[1][2];
  }
  else if((arr[0][0]==arr[1][1]) && (arr[1][1]==arr[2][2])){
    return arr[1][1];
  }
  else if((arr[2][0]==arr[1][1]) && (arr[1][1]==arr[0][2])){
    return arr[1][1];
  }
  else{
    return 0;
  }
}
int main(){
    cout<<"User 1 : O "<<endl;
    cout<<"User 2 : X "<<endl;
    cout<<"Rules of the game :"<<endl;
    cout<<" > User have to input the address of block in rows and columns (from 1 to 3) he/she want to fill in his turn."<<endl;
    cout<<" > The user who first mark three consecutives blocks either horizontally or vertically or diagonally will be the winner,"<<endl;
    cout<<" > In case of no winner the match will be declared as Draw."<<endl;
  char arr[3][3];
  for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      arr[i][j]='_';
    }
   }
  int row,col,move=0;
  bool u1=false,u2=true;
   while(true){
      while(true){
         if(u1 ^ u2){
          cout<<"Turn of User 1 :"<<endl;
          cout<<"Enter row number :"<<endl;
          cin>>row;
          cout<<"Enter column number :"<<endl;
          cin>>col;
          if(row>3 || col>3){
            cout<<"Wrong input Please try again."<<endl;
            break;
          }
          if( arr[row-1][col-1] == 'O' || arr[row-1][col-1] == 'X'){
             cout<<"Wrong input Please try again."<<endl;
             break;
          }
          arr[row-1][col-1] = 'O';
          u2=false;
          u1=false;
          move++;
          break;
         }
         else{
          cout<<"Turn of User 2 :"<<endl;
          cout<<"Enter row number :"<<endl;
          cin>>row;
          cout<<"Enter column number :"<<endl;
          cin>>col;
          if(row>3 || col>3){
            cout<<"Wrong input Please try again."<<endl;
            break;
          }
          if( arr[row-1][col-1] == 'O' || arr[row-1][col-1] == 'X'){
             cout<<"Wrong input Please try again."<<endl;
             break;
          }
          arr[row-1][col-1] = 'X';
          u1=true;
          move++;
          break;
         }

      }
      printtable(arr);
      if(checkwinner(arr)=='O' && move>=5){
         cout<<"User 1 is winner!"<<endl;
         cout<<"Would You like to play again ? Type 1 for YES and 0 for no"<<endl;
        bool check;
        cin>>check;
        if(check){
            for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
              arr[i][j]='_';
            }
            }
            move=0;
            u1=false,u2=true;
        }
        else break;
      }
      else if(checkwinner(arr)=='X' && move>=5){
        cout<<"User 2 is winner!"<<endl;
        cout<<"Would You like to play again ? Type 1 for YES and 0 for no"<<endl;
        bool check;
        cin>>check;
        if(check){
            for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
              arr[i][j]='_';
            }
            }
            move=0;
            u1=false,u2=true;
        }
        else break;
      }
      else if(move==9) {
        cout<<"Match is Draw"<<endl;
        cout<<"Would You like to play again ? Type 1 for YES and 0 for no"<<endl;
        bool check;
        cin>>check;
        if(check){
            for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
              arr[i][j]='_';
            }
            }
            move=0;
            u1=false,u2=true;
        }
        else break;
      }
   }
return 0;
}