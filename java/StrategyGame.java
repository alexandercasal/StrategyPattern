package strategygame;

/**
 * Driver program to demonstrate a basic use of the Strategy Design Pattern.
 * @author Alexander
 */
public class StrategyGame {

    /**
     * Create a new game and run it
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
       Game game = new Game();
       game.play();
    }
}
