#include <iostream>
using namespace std;
int main(){
    int x,y,w,h;
    cin >> x >> y >> w >> h;

    int dist = 9999;
    if (x<dist){
        dist = x;
    }
    if (y<dist){
        dist = y;
    }
    if (w-x<dist){
        dist = w-x;
    }
    if(h-y<dist){
        dist = h-y;
    }
cout << dist;
}