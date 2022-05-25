import java.util.*;

public class admin
{
    public static void main(String[] args)
    {
        user[] bankAccount = new user[50];
        bankAccount[0].validAccount = true;

        int currentAccount = 0;
        int userInput;
        int accountNumber;
        int pinNumber;
        int login = 1;
        int loop = 1;

        Scanner consoleInput = new Scanner(System.in);

        while(loop == 1)
        {
            System.out.println("Enter your Five Digit Account Number");
            accountNumber = consoleInput.nextInt();

            System.out.println("Enter your Five Digit PIN");
            pinNumber = consoleInput.nextInt();
            if (bankAccount[currentAccount].getAccountNumber() == accountNumber && bankAccount[currentAccount].getPin() == pinNumber)
            {
                login = 1;
                while(login == 1)
                {
                    if (bankAccount[currentAccount].getAccountNumber() == 00000 && bankAccount[currentAccount].getPin() == 12345)
                    {
                        System.out.println("\n1. Add a user\n2. Delete a user\n3. List all users\n4. Apply interest to all savings accounts\n5. Exit");

                        userInput = 0;
                        userInput = consoleInput.nextInt();

                        if (userInput == 1)
                        {
                            currentAccount += 1;
                            System.out.println("Please enter a five digit account number for the new account: ");
                            userInput = consoleInput.nextInt();
                            bankAccount[currentAccount].setAccountNumber(userInput);
                            System.out.println("Please enter a five digit pin for the new account: ");
                            userInput = consoleInput.nextInt();
                            bankAccount[currentAccount].setPin(userInput);

                            bankAccount[currentAccount].validAccount = true;
                        }
                        if (userInput == 2)
                        {
                            System.out.println("Please input which account you would like to delete (the 0-50 current account)");
                            userInput = consoleInput.nextInt();
                            if (bankAccount[userInput].getSave() == 0 && bankAccount[userInput].getCheck() == 0)
                            {
                                bankAccount[userInput].validAccount = false;
                            }
                            else
                            {
                                System.out.println("The accounts for the selected user are not empty");
                            }
                        }
                        if (userInput == 3)
                        {
                            for (int i = 0; i < 50; ++i)
                            {
                                if (bankAccount[i].validAccount == true)
                                {
                                    System.out.println("\nCurrent Account: \n");
                                    System.out.println(i);
                                    System.out.println("\nAccount Number: \n");
                                    System.out.println(bankAccount[i].getAccountNumber());
                                    System.out.println("Savings Account Balance: \n");
                                    System.out.println(bankAccount[i].getSave());
                                    System.out.println("Checking Account Balance: \n");
                                    System.out.println(bankAccount[i].getCheck());
                                }
                            }
                        }
                        if (userInput == 4)
                        {
                            int interestRate = 0;
                            int months = 0;

                            System.out.println("Please enter a new interest rate: \n");
                            interestRate = consoleInput.nextInt();
                            System.out.println("Please enter the period (in months): ");
                            months = consoleInput.nextInt();

                            for (int i = 0; i < 50; ++i)
                            {
                                int interest = 0;

                                interest = (bankAccount[i].getSave()) * (1 + (interestRate * months));
                                bankAccount[i].addToSave(interest);
                            }
                        }
                        if (userInput == 5)
                        {
                            login = 0;
                        }
                    }
                    else
                    {
                        System.out.println("What would you like to do? \n1. Get your checking account balance\n2. Get your savings account balance\n3. Deposit into your checking account \n4. Deposit into your savings account \n5. Withdraw from your checking account \n6. Withdraw from your savings account\n7. Exit");

                        userInput = 0;
                        userInput = consoleInput.nextInt();

                        if (userInput == 1)
                        {
                            System.out.println(bankAccount[currentAccount].getCheck());
                        }
                        if (userInput == 2)
                        {
                            System.out.println(bankAccount[currentAccount].getSave());
                        }
                        if (userInput == 3)
                        {
                            System.out.println("Please enter the amount you would like to deposit\n");
                            userInput = consoleInput.nextInt();
                            bankAccount[currentAccount].addToCheck(userInput);

                        }
                        if (userInput == 4)
                        {
                            System.out.println("Please enter the amount you would like to deposit");
                            userInput = consoleInput.nextInt();
                            bankAccount[currentAccount].addToSave(userInput);
                            userInput = 0;
                        }
                        if (userInput == 5)
                        {
                            System.out.println("Please enter the amount you would like to withdraw");
                            userInput = consoleInput.nextInt();
                            if (bankAccount[currentAccount].getCheck() < userInput) {
                                System.out.println("Error, you do not have this amount");
                            }
                            else
                            {
                                bankAccount[currentAccount].subtractFromCheck(userInput);
                                userInput = 0;
                            }
                        }
                        if (userInput == 6)
                        {
                            System.out.println("Please enter the amount you would like to withdraw");
                            userInput = consoleInput.nextInt();
                            if (bankAccount[currentAccount].getSave() < userInput)
                            {
                                System.out.println("Error, you do not have this amount");
                            }
                            else
                            {
                                bankAccount[currentAccount].subtractFromSave(userInput);
                                userInput = 0;
                            }
                        }
                        if (userInput == 7)
                        {
                            login = 0;
                        }
                    }
                }
            }
        }
    }
}
