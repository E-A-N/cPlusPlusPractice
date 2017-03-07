#include <iostream>

const int TENS = 10; //less than a dollar
const int HUNS = 100; //1 dollar
const int THOUS = 1000; //10 dollars
const int TENTHOUS = 10000; //100 dollars

int rangeCheck(int amount){
    int range;

    if (amount < HUNS){
        range = TENS;
    }
    else if (amount >= HUNS && amount < THOUS){
        range = HUNS;
    }
    else if (amount >= THOUS && amount < TENTHOUS){
        range = THOUS;
    }
    else if (amount >= TENTHOUS){
        range = TENTHOUS;
    }

    return range;
}

char moneyValue(int amount){
    char total[100];
    int range = rangeCheck(amount);
    switch(range){
        case TENS:
            total = "You have %d cents",amount;
    }
    return total;
}

int main(){

    int money = 55;
    char val[100] = moneyValue(money);
    std::cout << val;

}
