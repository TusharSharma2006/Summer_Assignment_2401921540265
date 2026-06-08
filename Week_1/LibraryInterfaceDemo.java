interface LibraryUser{
// Oji Ae Interface aa.... jida naam LibraryUser hai !!
    void registerAccount();
    void requestBook();

}

class KidUser implements LibraryUser{
    // Oji ye KidUser class hai jo tab implement hogi jab kid's wala case lgayenge apa
    int age;
    String bookType;

    KidUser(int age,String bookType){
        this.age = age;
        this.bookType = bookType;
    }

    public void registerAccount(){
        if(age < 12){
            System.out.println("You have successfully registered under a Kids Account");
        }
        else{
            System.out.println("Sorry, Age must be less than 12 to register as a kid");
        }
    }

    public void requestBook(){
        if(bookType.equals("Kids")){
            System.out.println("Book Issued successfully, please return the book within 10 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only kids books");
        }
    }
}

class AdultUser implements LibraryUser{
    // Oji ye AdultUser class hai jo tab implement hogi jab adult's wala case lgayenge apa
    int age;
    String bookType;

    AdultUser(int age,String bookType){
        this.age = age;
        this.bookType = bookType;
    }

    public void registerAccount(){
        if(age > 12){
            System.out.println("You have successfully registered under an Adult Account");
        }
        else{
            System.out.println("Sorry, Age must be greater than 12 to register as an adult");
        }
    }

    public void requestBook(){
        if(bookType.equals("Fiction")){
            System.out.println("Book Issued successfully, please return the book within 7 days");
        }
        else{
            System.out.println("Oops, you are allowed to take only adult Fiction books");
        }
    }
}

public class LibraryInterfaceDemo{
    public static void main(String[] args){

        System.out.println("Kid's User Test Case 1");

        KidUser k1 = new KidUser(10,"Kids");
        k1.registerAccount();
        k1.requestBook();

        System.out.println();

        KidUser k2 = new KidUser(18,"Fiction");
        k2.registerAccount();
        k2.requestBook();

        System.out.println("\nAdult's User Test Case 2");

        AdultUser a1 = new AdultUser(5,"Kids");
        a1.registerAccount();
        a1.requestBook();

        System.out.println();

        AdultUser a2 = new AdultUser(23,"Fiction");
        a2.registerAccount();
        a2.requestBook();
    }
}