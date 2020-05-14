var factorial = (a) =>{
    if(a==1){
        return 1;
    }
    while(a!=1){
        return a*factorial(a-1);
    }
}

console.log(factorial(10));

class Account {
    name = "";
    balance = 0;
    constructor(name , balance){
        this.name = name;
        this.balance = balance;
    }
    deposit(amt){
        this.balance += amt;
        console.log(amt + "Rs deposited to " + this.name + "'s account")
    }
    display(){
        console.log(this.name + " " + this.balance);
    }
}
acc = new Account('Nihir' , 10000);
acc.display();
acc.deposit(5000);
acc.display();

class math {
    static square(a){
        return a*a;
    }
    static cube(a){
        return a*a*a;
    }
}

console.log(math.square(5));
console.log(math.cube(3));

class currentAccount extends Account{
    withdraw(amt){
        this.balance -= amt;
        console.log(amt + "Rs. withdrawn from " + this.name + "'s Account");
    }
    show(){
        console.log(this.name + " " + this.balance);
    }
}

A = new currentAccount('A' , 1234);
A.show();
A.withdraw(234);
A.show();
B = new currentAccount('B' , 9876);
B.show();
B.deposit(124);
B.display();
B.withdraw(1000);
B.show();