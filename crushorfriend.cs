using System;

class Program {
    static void Greet(string inputStr) {
        string message = "You have a friend!";

        if (inputStr == "crush") {
            message = "You have a crush!";
        }

        Console.WriteLine(message);
    }

    static void Main() {
        // crush, friend
        Greet("crush");
    }
}
