package main
import "fmt"

func main() {

    // crush, friend
    inputStr := "crush"

    message := "You have a friend!"

    if inputStr == "crush" {
        message = "You have a crush!"
    }

    fmt.Println(message)
}