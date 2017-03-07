#include <iostream>
using namespace std;

int fibonacci(int max,int n){
    int result;

    if (n > max){
        result = n;
    }
    else {
        result = fibonacci(max,n + 1) + fibonacci(max,n + 2);
    }
    cout << n << "\n";
    return result;

}

int main(){
    int count = 10;
    fibonacci(count,0);
    return 0;
}
