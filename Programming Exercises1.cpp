// Example program
#include <iostream>
#include <string>
using namespace std ;

class account {
    
    private:
        string name="" ;
        float balance=0.0;
        string number="";
    
    public :
    
    account (string ana , float abal ,string anum ){
        name =ana;
        balance =abal;
        number =anum;
        }
    
     account (string ana ,string anum ){
        name =ana;
        balance =300;
        number =anum;
        }
    
    float deposit (float amount){
        balance = balance + amount ;
        return amount;
        }
    
    float withdraw (float amount){
        balance = balance - amount ;
        return amount;
        }
    void check_acc (){
        
        cout << "name :" << name<<endl;
        cout << "number :" << number<<endl;
        cout << "balance :" << balance<<endl;
                
        }
    float get_balance() {
        return balance;
        }
        
    string get_name() {
        return name;
        }
    string get_number() {
        return number;
        }
    
    };



int main()
{
 account no1 ("client1",5000,"xxx-xxx-xxx-xxx");
 account no2 ("client1","xxx-xxx-xxx-xxx");
 
  cout << "---------before transaction---------" <<endl;
 
 
 no1.check_acc();
 
 no2.check_acc();

 
 no2.deposit (no1.withdraw(1000));
 
 cout << "---------after transaction---------" <<endl;
 
 cout << "balance no1 :" << no1.get_balance()<<endl;
 
 cout << "balance no2 :" << no2.get_balance()<<endl;
 
 
 
}
