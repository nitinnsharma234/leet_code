class Bank {
     private balance: number[];
    constructor(balance: number[]) {
        this.balance=balance;
    }

    transfer(account1: number, account2: number, money: number): boolean {
        if(  this.balance.length>account1-1 && this.balance[account1-1]>=money && this.balance.length>account2-1){
            this.balance[account1-1]-=money;
            this.balance[account2-1]+=money;
            return true;
        }
        return false;
    }

    deposit(account: number, money: number): boolean {
        if(account-1<this.balance.length){

             this.balance[account-1]+=money;
             return true;
        }


        return false;
        
    }

    withdraw(account: number, money: number): boolean {
            if(account-1<this.balance.length && this.balance[account-1]>=money){
             this.balance[account-1]-=money;
             return true;
        }
        return false;
    }
}

/**
 * Your Bank object will be instantiated and called as such:
 * var obj = new Bank(this.balance)
 * var param_1 = obj.transfer(account1,account2,money)
 * var param_2 = obj.deposit(account,money)
 * var param_3 = obj.withdraw(account,money)
 */