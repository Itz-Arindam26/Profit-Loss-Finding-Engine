#include <bits/stdc++.h>
using namespace std;

int main(){
    int sp, cp;
    cout<<"Enter Cost Price(in Rs.):\n";
    cin>>cp;

    cout<<"Enter Selling Price(in Rs.):\n";
    cin>>sp;
    if(sp>cp){
        double gain = sp-cp;
        cout<<"Rs."<<gain<<" Profit\n";
        double gainpercent = gain / cp;
        cout<<gainpercent * 100<<"% Profit\n";
    }
    else if(sp=cp){
        cout<<"There is neither Profit nor Loss.\n";
    }
    else{
        double loss = cp-sp;
        cout<<"Rs."<<loss<<" Loss\n";
        double losspercent = loss / cp;
        cout<<losspercent * 100<<"% Loss\n";
    }
    return 0;
}