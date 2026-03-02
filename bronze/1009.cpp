# include <iostream>
# include <cmath>
using namespace std;

int main(){

int a;
cin>>a;
for (int i = 0; i < a; i++){
int b,c;
cin >> b >> c;
if (b%10 ==0){
    cout<<10<<'\n';
}
else{
    if (c%4==0){
    cout << (int)pow(b%10,4)%10 << '\n'; 
    }
    else{
    cout << (int)pow(b%10,c%4) %10<<'\n';
    }
}
}
}
