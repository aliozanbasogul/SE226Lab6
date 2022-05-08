#include <iostream>
using namespace std;

double sumFunc(double inp){
    if(inp > 0)   {
        return ((double(inp)/double((inp+2))-10)) * sumFunc(inp-1);
    }
    else
        return 1;
}

double sumFunc(){
    int inp1;
    cout<<"Please enter an integer: "<<endl;
    cin >> inp1;

    if(inp1 > 0){
        return (inp1 / (inp1 + 2)) - 10;   }
    else{
        return 1;
    }
}

int main(){
    cout << "Please enter a number: " << endl;
    int x;
    cin>> x;
    cout << sumFunc(x) << endl;
    cout << sumFunc() << endl;

    return 0;
}