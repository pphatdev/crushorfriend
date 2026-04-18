<?php
    function greet($inputStr) {
        $message = "You have a friend!";

        if ($inputStr === "crush") {
            $message = "You have a crush!";
        }

        echo $message;
    }

    // crush, friend
    greet("crush");
?>
