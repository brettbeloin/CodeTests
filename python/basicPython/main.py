class Person:
    fname: str
    lname: str
    age: int

    def __init__(self, fname: str, lname: str, age: int):
        self.fname = fname
        self.lname = lname
        self.age = age

    def __str__(self):
        return f"First Name: {self.fname}\nLast Name: {self.lname}\nAge: {self.age}"


def main():
    f_name: str = input("what is your First Name: ")
    l_name: str = input("what is your Last Name: ")
    age: int = int(input("How old are you: "))

    person: Person = Person(f_name, l_name, age)

    print(person)


if __name__ == "__main__":
    main()
