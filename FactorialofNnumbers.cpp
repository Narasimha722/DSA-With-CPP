#include <iostream>
using namespace std;
int factorial(int X) {
   int ans = 1;
   for (int i = 1; i <= X; i++) {
      ans = ans * i;
   }
   return ans;
}
int main() {
<<<<<<< HEAD
   int X ;
   cin>>X;
=======
   int X = 5;
>>>>>>> 7e95ae20c3cdb8634c2cb39216f00a5f5dc28050
   int result = factorial(X);
   cout << "The factorial of " << X << " is " << result;
}
