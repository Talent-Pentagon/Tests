class Animal {
    String name;

    public Animal(String name) {
        this.name = name;
    }
}

class Dog extends Animal {
    // ❌ Bug: Missing call to super(name), causes compilation error
    public Dog(String name) {
        // Implicit call to super() fails because Animal doesn't have a no-arg
        // constructor
    }

    void bark() {
        System.out.println(name + " says woof");
    }
}

public class Animals {
    public static void main(String[] args) {
        String name = args.length > 0 ? args[0] : "Default";
        Dog d = new Dog(name);
        d.bark();
    }
}
