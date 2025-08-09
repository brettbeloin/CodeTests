use rand::{Rng, rngs::ThreadRng, thread_rng};
use std::io::{self, stdin};

pub fn start() {
    create_game();
}

fn create_game() {
    let mut is_playing: bool = true;
    let mut rng = thread_rng();

    println!("Welcome to The guessing_game\n");

    while is_playing {
        let difficulty: i8;
        let mut buffer: String = String::new();
        let mut lives: u8 = 5;

        buffer.clear();
        println!("choose your difficulty");
        println!("1. easy");
        println!("2. medium");
        println!("3. hard");
        println!("4. quit");

        io::stdin().read_line(&mut buffer).unwrap();
        difficulty = buffer.trim().parse().unwrap();

        match difficulty {
            1 => easy(&mut lives, &mut rng),
            2 => med(&mut lives, &mut rng),
            3 => hard(&mut lives, &mut rng),
            4 => is_playing = quit(),
            _ => println!("Invailed Input"),
        }
    }
}

fn easy(lives: &mut u8, rand: &mut ThreadRng) {
    let min: u8 = 1;
    let max: u8 = 10;
    let num: u8 = rand.gen_range(min..max);
    let mut int_input: u8 = 0;
    let mut input: String = String::new();

    check_win(num, &mut int_input, &mut input, lives, min, max);
}
fn med(lives: &mut u8, rand: &mut ThreadRng) {
    let min: u8 = 1;
    let max: u8 = 50;
    let num: u8 = rand.gen_range(min..max);
    let mut int_input: u8 = 0;
    let mut input: String = String::new();

    check_win(num, &mut int_input, &mut input, lives, min, max);
}
fn hard(lives: &mut u8, rand: &mut ThreadRng) {
    let min: u8 = 1;
    let max: u8 = 100;
    let num: u8 = rand.gen_range(min..max);
    let mut int_input: u8 = 0;
    let mut input: String = String::new();

    check_win(num, &mut int_input, &mut input, lives, min, max);
}
fn quit() -> bool {
    println!("Good bye");
    return false;
}

fn check_win(num: u8, int_input: &mut u8, input: &mut String, lives: &mut u8, min: u8, max: u8) {
    while *lives > 0 {
        input.clear();

        println!("Pick a number from {} to {}: ", min, max);
        stdin().read_line(&mut *input).unwrap();
        *int_input = input.trim().parse().unwrap();

        if *int_input != num {
            *lives = *lives - 1;
        } else {
            println!("You Won. You had {} lives left", *lives);
            return;
        }

        if *int_input < num {
            println!("Your guess is too low");
        } else {
            println!("Your guess is too high");
        }
    }

    println!("Sorry the number was {}.", num);
}
