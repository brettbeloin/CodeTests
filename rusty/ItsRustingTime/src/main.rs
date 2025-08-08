fn main() {
    let result = factorial(5);
    println!("Factorial of 5 is: {}", result);

    let n = 0;
    ru(n, 100);
}

fn ru(n: i32, u: i32) -> i32 {
    if n != u {
        println!("{}", n);
        ru(n + 1, u)
    } else {
        1
    }
}
