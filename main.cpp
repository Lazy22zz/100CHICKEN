#include <iostream>

using namespace std;

int main(){
    // A is 5 dollar
    // B is 3 dollar
    // C is 1/3 dollar
    //amount is 100, and cost is 100 dollar
    int A, B;
    
    //A+B+C =100; 5A + 3B + 1/3C = 100
    for(int i = 0; i < 20; ++i){
        for (int j = 0 ; j < 34; ++j){
            if (7*i + 4*j == 100){
                A = i;
                B = j;
            }
        }
    }

    cout << "Answer is :" << "A is " << A << "B is " << B << "C is " << 100 -A -B << endl;

    return 0;
}