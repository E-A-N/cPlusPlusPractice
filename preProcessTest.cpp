#include <iostream>
using namespace std;

#define MONSTER (999 + 999)
#define doubler(x)(x+x)
#define tripler(x)(x+x+x)
int const Monster = 55;


class featureMath {
    public:
        int multiplyer(int root, int rep){
          
            if (rep == 0 || root == 0){
               return 0;
            }
          
            return root + multiplyer(root, rep - 1);
        }
};

int main(){
  
    int z = 7;
    int x = 19;
    featureMath feature;
    
    x = z == 5 ? doubler(x) : tripler(x);
    
    cout << "Testing the preprocessor: " << MONSTER + Monster << "\n";
    cout << "Twice the monster is: " << doubler(Monster) << "\n";
    cout << "The value of x is: " << x << "\n";
    cout << "X * Z = " << feature.multiplyer(x,z) << "\n";
    
    for (int i = 0; i < 100; i++){
        cout << "X is currently " << tripler(x) << "\n"; x++;
    }
    return 0;
}
