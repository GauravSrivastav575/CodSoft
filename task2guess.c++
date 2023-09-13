
#include<bits/stdc++.h>
using namespace std;
int main(){
  int ans;
  int num;
  srand(time(0));
    num = rand();
    cout<<"Guess the number"<<endl;
    while(ans != num){
        cin>>ans;

        if(ans>num){
            int diff = ans-num;
            if(diff>1000) cout<<"Try smaller number. "<<endl;
            else if(diff<100 && diff>50) cout<<"Try smaller number you are close."<<endl;
            else cout<<"Try slightly small number you are too close."<<endl;
        }

        else if(ans<num){
            int diff2 = num-ans;
            if(diff2>1000) cout<<"Try greater number."<<endl;
            else if(diff2<100 && diff2>50) cout<<"Try greater number you are close."<<endl;
            else cout<<"Try slightly greater number you are too close."<<endl;
        }

        else cout<<"Congratulations ! You guessed it right."<<endl<<"The ans is "<<ans<<endl;
    }
return 0;
}