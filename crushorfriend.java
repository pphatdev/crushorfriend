public class Program {
    static void greet(String inputStr) {
        String message = "You have a friend!";

        if (inputStr.equals("crush")) {
            message = "You have a crush!";
        }

        System.out.println(message);
    }

    public static void main(String[] args) {
        // crush, friend
        greet("crush");
    }
}
