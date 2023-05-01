#include <iostream>
#include <stdlib.h>
#include<math.h>

using namespace std;
float f(float x){
    return 2*x*x+4*x-5;
}
float g(float x) {
    
    return 4*x+4;;
}

int main()
{
    float x0,x1,E,N;
    cout<<"Initial guess: ";
    cin>>x0;
    cout<<"Tolerable Error: ";
    cin>>E;
    cout<<"Max. number of iterations: ";
    cin>>N;
    int count=0 ;
        do{
        if(count>N)
            cout<<"NON Convergent";
        if(count>0)
            x0=x1;
        float f1= f(x0);
        float g1=g(x0);
        cout<<"x1"<<x1;
        x1= x0-(f1/g1);
        count++;
    }while(abs(f(x1))>E);
    
    cout<<"Root: "<<x1;
}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    return 0;
}