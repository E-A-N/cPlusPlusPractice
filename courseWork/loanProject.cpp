#include <iostream>

class Loan{
    double annualInterestRate;
    double loanAmount;
    int numberOfYears;
    
    public:
        Loan();
        Loan(double,int,double);
        
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


int main(){
  
  
    return 0;
}
