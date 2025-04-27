#include<iostream>

using namespace std;

class queue{

    int arr[3]= {0};
    int num;



public:

queue(): num(-1){}

int push(int x){

if(num < 2){
    num+=1;
   arr[num]= x;
}
else{
    int y= pop();
    num+=1;
    arr[num]= x;

    return y;
}

return -1;

}

int pop(){
    int x= arr[0];
    arr[0]= arr[1];
    arr[1]=arr[2];
    num-=1;
    return x;
}

void debug(){
    cout<<arr[0];
    cout<<arr[1];
    cout<<arr[2];
    cout<<"\n";
}

};