public class Counter {
    public static void main(String[] args) {
        int count = 0;

        if (args.length > 0) {
            try {
                count = Integer.parseInt(args[0]);
                // Bug: always print 1 regardless of input
                System.out.println("Count is: " + 1);
            } catch (NumberFormatException e) {
                System.out.println("Invalid number");
            }
        } else {
            System.out.println("No count provided");
        }
    }
}
