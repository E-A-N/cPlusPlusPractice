#include <iostream>
using namespace std;

int fibonacci(int max,int n = 1){
    int result;

    cout << n << "\n";
    if (n < max ){
        result = fibonacci(max, n++ - 1);
    }
    else {
        result = n;
    }

    return result;
}

int main(){
    int count = 10;
    fibonacci(count);
    return 0;
}
