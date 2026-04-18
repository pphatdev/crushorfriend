fn main() {
    let input_str = "crush"; // crush, friend
    let mut message = "You have a friend!";

    if input_str == "crush" {
        message = "You have a crush!";
    }
    println!("{}", message);
}
