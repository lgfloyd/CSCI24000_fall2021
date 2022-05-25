import java.util.*;

public class user{
    protected int pin;
    protected int savingsBalance;
    protected int checkingBalance;
    public boolean validAccount = false;
    public void setAccountNumber(int accountNumberInput)
    {
        pin = accountNumberInput;
    }
    public int getAccountNumber()
    {
        return this.pin;
    }
    public void setPin(int pinInput)
    {
        pin = pinInput;
    }
    public int getPin()
    {
        return this.pin;
    }
    public int getSave()
    {
        return this.savingsBalance;
    }
    public void addToSave(int deposit)
    {
        savingsBalance += deposit;
    }
    public void subtractFromSave(int withdraw)
    {
        savingsBalance -= withdraw;
    }
    public int getCheck()
    {
        return this.checkingBalance;
    }
    public void addToCheck(int deposit)
    {
        checkingBalance += deposit;
    }
    public void subtractFromCheck(int withdraw)
    {
        checkingBalance -= withdraw;
    }
}

