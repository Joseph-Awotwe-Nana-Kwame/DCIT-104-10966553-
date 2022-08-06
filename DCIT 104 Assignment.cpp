#include <iostream>

// 10966553 AWOTWE JOSEPH NANA KWAME

using namespace std;

int main()
{
    int z = 1, average = 0, sum = 0;
   while ( z++ <= 10000) {
   if( z%2 == 0) {
    sum += z;
    average ++;
   }
 }

 cout << " sum of all even numbers between 1 and 10000 is "<< sum << endl;

 cout << "average is "<< (sum /average ) << endl;

 return 0;
}
