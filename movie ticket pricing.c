import java.util.Scanner;

public class MovieTicketPricing {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int seatType = sc.nextInt();
        int showTime = sc.nextInt();
        int price = 0;

        switch (seatType) {
            case 1:
                price = 150;   // Silver
                break;
            case 2:
                price = 250;   // Gold
                break;
            default:
                System.out.println("Invalid Seat Type");
                return;
        }

        // Night show condition
        if (showTime >= 18) {
            price += 50;
        }

        System.out.println("Ticket Price ₹" + price);
    }
}
