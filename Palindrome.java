package palindrome;
import java.util.Scanner;

public class Palindrome {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in); //this will declare a new scanner to read input
		System.out.print("Enter a string with no punctuation or spaces: ");  //print out to console then read in user input 
  		//In Java all functions and variables are declared within a class thus there is no scope resolution operator. Java also does not allow for variables. in java varables must exist within a class. Unlike C++ where glooble varables exist. 
		String palindrome = sc.next();
		int palindromeLen = palindrome.length(); //This will find string length length
		boolean isPal = true;
		//This will go throught the string and will compare the first and last characters. Then It will incrementing and decrementing the iterators. 
		//If there is a proint when the program does find a difference, the program stops running.
		for (int i=0; i < palindrome.length(); i++) {
			if (palindrome.charAt(i) != palindrome.charAt(palindromeLen-1)) {
				System.out.print(palindrome);  //Java instead of having overloaded IO operators it has special print functions and scanners, and instead of indexing it has charAt().
				System.out.println(" is not a palindrome");
				isPal = false; //if this is false the program will not print the true statement
				break;
			}
			palindromeLen--; //decrement the length iterator for the next cycle
		}
		if (isPal == true) { //if isPal is never changed then the string must be a palindrome and the true statement will print
			System.out.print(palindrome); //java passes primitives by value and objects by reference.
			System.out.println(" is a palindrome");
		}
		//close the scanner to prevent resource loss
		sc.close();
	}		
}

//Compilation
//Java uses an independent compiler then running on a platform dependent virtual machine called the JVM.
//That is why java is able to be compiled once and run anywhere.
//First the compiler takes the .java source code and translates it into bytecode. Then the bytecode is passed to the JVM where is is interpreted for the machine to run.
