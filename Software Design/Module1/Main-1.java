package falin;

import falin.User.NSALoginController;
import falin.User.User;
import falin.User.Test;

public class Main {

    public static void main(String[] args) {
        Test(pass) = new Test();
        NSALoginController.hashUserPassword();
        System.out.println("Password:", User.getPassword());
        System.out.println("Salt:", User.getSalt());
        System.out.println("Hash:", User.getHash());

        //System.out.print("Enter Password:");
        Test.main();
        NSALoginController.verifyPassword();

    }
}
