#include <iostream>

class Loan{
    double annualInterestRate;
    double loanAmount;
    
    int numberOfYears;
    public:
        Loan();
        Loan(double,int,double);
        
        //setters
        void setAnnualInterestRate(double rate){
            annualInterestRate = rate;
        };
        
        //getters
        double getAnnualInterestRate(){
            return annualInterestRate;
        }
        
        double getLoanAmount(){
            return loanAmount;
        }
        
        int getNumberOfYears(){
            return numberOfYears;
        }
        
        double getMonthlyPayment(){
            return monthlyPayment;
        }
        
        double getTotalPayment(){
            return totalPayment;
        }

};


Loan::Loan(){
  
  
  
}
