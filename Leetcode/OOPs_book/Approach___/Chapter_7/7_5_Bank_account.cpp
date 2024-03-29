#include <bits/stdc++.h>

using namespace std; 

static auto fast_io =  [](){ios_base::sync_with_stdio(0); cin.tie(nullptr); cout.tie(nullptr); return false;}(); 

class Account{ 
private: 
    long accNumber; 
    double balance;
    static int base; //static member   

public: 
    Account(double bal); 
    Account(const Account & acc) = delete; 
    ~Account(); 
        
    void checkBalance() const; 
    void deposit(double amount); 
    void withdraw(double amount); 
    // static int getBase();  
    

}; 

Account::Account(double bal):balance(bal){ 
    if (!bal){ 
        cout << "Exit! No balance found!"; 
        assert(false); 
    }
    base += 1;
    accNumber += base + 100000;
    cout << "Account: " << accNumber << " is opened" << endl; 
    cout << "Balance $" << balance << endl << endl; 

}


int Account::base = 0; 

Account::~Account()
{
    cout << "Account #: " << accNumber << "is closed" << endl; 
    cout << "$" << balance << "was sent to the customer." << endl << endl; 

}

void Account::checkBalance() const{ 
    cout << "Account #: " << accNumber << endl; 
    cout << "Transaction: balance check" << endl; 
    cout << "Balance: $" << balance << endl << endl; 

}

void Account::deposit(double amount){ 
    if (amount > 0){ 
        balance += amount; 
        cout << "Account #: " << accNumber << endl; 
        cout << "Transaction: deposit of $" << amount << endl; 
        cout << "New balance: $" << balance << endl << endl; 
    
    }
    else{ 
    cout << "Transaction aborted: " << endl; 
    
    
    }

}

void Account::withdraw(double amount){ 
    if (amount > balance){ 
        amount = balance; 
    
    }
    if (amount > 0){
            balance -= amount; 
            cout << "Account #: " << accNumber << endl; 
        cout << "Transaction: deposit of $" << amount << endl; 
        cout << "New balance: $" << balance << endl << endl; 
    
            
    }
    

}


int main(){ 
    fast_io; 
    Account acc1(2000); 
    Account acc2(5000); 
    Account acc3(1000);
    
    acc1.deposit(150); 
    acc2.checkBalance(); 
    acc1.checkBalance( ); 
    acc1.checkBalance();
    acc3.withdraw(800); 
    acc1.withdraw(1000); 
    acc2.deposit(120); 
    return 0; 

}


