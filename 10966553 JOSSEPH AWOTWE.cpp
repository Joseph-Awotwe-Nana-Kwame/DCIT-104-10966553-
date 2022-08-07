#include <iostream>

// 10966553 JOSEPH AWOTWE NANA KWAME

using namespace std;

int main(){
int num, k, limit, sum = 0;

    // Take input from user
    cout << "Find sum of prime numbers upto : ";
    cin >> limit;

    for(num = 2; num <= limit; num++) {

        for(k = 2; k <= (num / 2); k++) {

            if(num % k == 0) {
                k = num;
                break;
            }
        }

        // If the number is prime then add it.
        if(k != num) {
            sum += num;
        }
    }

    cout << endl << "Sum of all prime numbers upto " << limit << " : " << sum;


return 0;
}





