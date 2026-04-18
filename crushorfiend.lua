function greet(inputStr)
    local message = "You have a friend!"

    if inputStr == "crush" then
        message = "You have a crush!"
    end

    print(message)
end

-- crush, friend
greet("crush")
