class Key {
    String hexKey;

    public Key(String hexKey) {
        this.hexKey = hexKey;
    }
}

class AESKeyChecker extends Key {
    public AESKeyChecker(String hexKey) {
        super(hexKey);
    }

    public boolean isValid() {
        return hexKey.matches("[0-9A-Fa-f]{32}");
    }
}

public class EncryptionKeyValidator {
    public static void main(String[] args) {
        if (args.length < 1) {
            System.out.println("Usage: java EncryptionKeyValidator <hexKey>");
            return;
        }
        String key = args[0];
        AESKeyChecker checker = new AESKeyChecker(key);
        System.out.println(checker.isValid() ? "ValidKey" : "InvalidKey");
    }
}
