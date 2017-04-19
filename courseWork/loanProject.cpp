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
        
        void setMonthlyPayment(double amount, rate){
            double adustedRate = (rate * amount) / 12;
            monthlyPayment = ((amount/numberOfYears) / 12) + adjustedRate;
        }
        
        void setTotalPayment(double amount, double rate){
            totalPayment = amount + (rate * amount)
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
    setMonthlyPayment(amount);
    setTotalPayment()
    
}

int main(){
    Loan eLow = Loan(5.5,40000.0,15);
    double amount = eLow.getLoanAmount();
  
    std::cout << amount << std::endl;
    return 0;
}
