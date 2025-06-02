public class Animal {
    String name;

    public Animal(String name) {
        this.name = name;
    }
}

class Dog extends Animal {
    public Dog(String name) {
        super(name);
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