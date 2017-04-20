#include <iostream>

class Loan{
    double annualInterestRate;
    double loanAmount;
    int numberOfYears;
    
    public:
        Loan();
        Loan(double,double,int);
        
        double monthlyPayment;
        double totalPayment;
        
        //setters
        void setNumberOfYears(int years){
            numberOfYears = years;
        }
        
        void setAnnualInterestRate(double rate){
            annualInterestRate = rate;
        }
        
        void setLoanAmount(double amount){
            loanAmount = amount;
        }
        
        void setMonthlyPayment(double amount, double rate){
            double adjustedRate = (rate * amount) / 12;
            monthlyPayment = ((amount/numberOfYears) / 12) + adjustedRate;
        }
        
        void setTotalPayment(double amount, double rate){
            totalPayment = amount + (rate * amount);
        }
        
        //getters
        int getNumberOfYears(){
            return numberOfYears;
        }
        
        double getAnnualInterestRate(){
            return annualInterestRate;
        }
        
        double getLoanAmount(){
            return loanAmount;
        }
        
        double getMonthlyPayment(){
            return monthlyPayment;
        }
        
        double getTotalPayment(){
            return totalPayment;
        }
};

Loan::Loan(double rate, double amount, int years){
    setAnnualInterestRate(rate);
    setLoanAmount(amount);
    setNumberOfYears(years);
    setMonthlyPayment(amount,rate);
    setTotalPayment(amount,rate);
}

int main(){
    Loan eLow = Loan(.055,40000.0,15);
    double monthly = eLow.getMonthlyPayment();
    double total = eLow.getTotalPayment();
  
    std::cout << monthly << std::endl;
    std::cout << total << std::endl;
    return 0;
}
