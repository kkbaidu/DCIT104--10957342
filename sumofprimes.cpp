#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int number, primes, check;
    int primeSum = 2;
    cout << "Number: ";
    cin >> number;
    if(number == 0 || number == 1){
        cout << "0";
    }
    else if(number == 2){
        cout << primeSum;
    } else{
        for(int i = 2; i <= number; i++){
         for(check = 2; check <= (i / 2); check++){
           if(i % check == 0){
            check = i;
            break;
           }
         }
         if(check != i)
         {
              primeSum += i;
         }
    }
    cout << primeSum;
    }

    return 0;
}
