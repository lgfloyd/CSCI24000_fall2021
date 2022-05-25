import java.util.Scanner;
import java.io.*;

public class pet implements java.io.Serializable
{
    public String petSpecies;
    public String petName;
    public int petAge;
    public int petPlaytime;

    public static void main(String [] args)
    {
        pet perfectPet = new pet();

        perfectPet.printPetSpecies();
        perfectPet.printPetName();
        perfectPet.printPetAge();
        perfectPet.printPetPlaytime();

        perfectPet.petSpeciesChange();
        perfectPet.petNameChange();
        perfectPet.petBirthday();
        perfectPet.petPlaytime();
        perfectPet.savePet();
    }

    public pet()
    {
        Scanner scannerReader = new Scanner(System.in);
        System.out.println("Would you like to load a saved pet? y/n");
        if ((scannerReader.next()).equals("y"))
        {
            try
            {
                FileInputStream inputFile = new FileInputStream("perfectPetSerialized.ser");
                ObjectInputStream input = new ObjectInputStream(inputFile);

                pet perfectPet = (pet)input.readObject();

                inputFile.close();
                input.close();

                this.petSpecies = perfectPet.petSpecies;
                this.petName = perfectPet.petName;
                this.petAge = perfectPet.petAge;
                this.petPlaytime = perfectPet.petPlaytime;
            }

            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }
        }

        else
        {
            System.out.println("What kind (species) of pet do you have?");
            this.petSpecies = scannerReader.next();
            System.out.println("What is your pet's name?");
            this.petName = scannerReader.next();
            System.out.println("How old is your pet?");
            this.petAge = scannerReader.nextInt();
            System.out.println("How many times have you played with your pet? (A rough estimate is fine)");
            this.petPlaytime = scannerReader.nextInt();
        }
    }

    public void printPetSpecies()
    {
        System.out.println("Your pet's species is: " + petSpecies);
    }

    public void printPetName()
    {
        System.out.println("Your pet's name is: " + petName);
    }

    public void printPetAge()
    {
        System.out.println("Your pet's age is: " + petAge);
    }

    public void printPetPlaytime()
    {
        System.out.println("The amount of times you've played with your pet is: " + petPlaytime);
    }

    public void petSpeciesChange()
    {
        Scanner scannerReader = new Scanner(System.in);
        System.out.println("Would you like to change you pet's species? y/n");

        if ((scannerReader.next()).equals("y"))
        {
            System.out.println("Please enter you pet's new species");
            this.petSpecies = scannerReader.next();

            System.out.println("Your pet's new species is: " + petSpecies);
        }

        else
        {
            System.out.println("I like your pet's current species anyway");
        }
    }

    public void petNameChange()
    {
        Scanner scannerReader = new Scanner(System.in);
        System.out.println("Would you like to change you pet's name? y/n");

        if ((scannerReader.next()).equals("y"))
        {
            System.out.println("Please enter you pet's new name");
            this.petName = scannerReader.next();

            System.out.println("Your pet's new name is: " + petName);
        }

        else
        {
            System.out.println("I like your pet's current name anyway");
        }
    }

    public void petBirthday()
    {
        Scanner scannerReader = new Scanner(System.in);
        System.out.println("Has your pet had a birthday recently? y/n");

        if ((scannerReader.next()).equals("y"))
        {
            petAge += 1;

            System.out.println("Happy birthday!");
            this.printPetAge();
        }

        else
        {
            System.out.println("Make sure to wish them a happy birthday when they do!");
        }
    }

    public void petPlaytime()
    {
        Scanner scannerReader = new Scanner(System.in);
        System.out.println("Have you played with you pet recently? y/n");

        if ((scannerReader.next()).equals("y"))
        {
            petPlaytime += 1;

            System.out.println("I hope they had fun!");
            this.printPetPlaytime();
        }

        else
        {
            System.out.println("Make sure to play with them when you have time!");
        }
    }

    public void savePet()
    {
        System.out.println("Would you like to save your pet? y/n");
        Scanner scannerReader = new Scanner(System.in);

        if ((scannerReader.next()).equals("y"))
        {
            try
            {
                FileOutputStream outputFile = new FileOutputStream("perfectPetSerialized.ser");
                ObjectOutputStream output = new ObjectOutputStream(outputFile);

                output.writeObject(this);

                outputFile.close();
                output.close();

                System.out.println("Your pet has been saved");
            }

            catch(Exception e)
            {
                System.out.println(e.getMessage());
            }
        }

        else
        {
            System.out.println("Your pet was not saved");
        }
    }
}
