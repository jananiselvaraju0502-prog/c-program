import java.util.Scanner;

public class MobileCallCharges {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int callType = sc.nextInt();
        int minutes = sc.nextInt();
        int rate = 0;
        int totalCharge;

        switch (callType) {
            case 1:
                rate = 1;   // Local
                break;
            case 2:
                rate = 3;   // STD
                break;
            case 3:
                rate = 10;  // ISD
                break;
            default:
                System.out.println("Invalid Call Type");
                return;
        }

        totalCharge = rate * minutes;

        System.out.println("Call Charge ₹" + totalCharge);
    }
}
