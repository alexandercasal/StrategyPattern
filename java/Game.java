package strategygame;

import java.util.Scanner;

/**
 * Demonstrate the use of the Strategy Design Pattern through a very
 * simple game which allows the user to select different weapons. Each
 * weapon has a different characteristic, changing the way the player attacks.
 * @author Alexander
 */
public class Game {

    private boolean playing;
    private Player player;
    
    /**
     * Constructor
     * 
     * Initialize the game to allow playing
     */
    public Game() {

        playing = true;
        player = new Player();
    }

    /**
     * Play
     * 
     * Control the game loop allowing the player to select various
     * options.
     */
    public void play() {

        System.out.println("Welcome to the Strategy Pattern Game!");
        
        while (playing) {
            
            showOptions();
            switch (getOption()) {

                case 1:
                    player.changeWeapon(new LargeSword());
                    break;
                case 2:
                    player.changeWeapon(new SmallSword());
                    break;
                case 3:
                    player.changeWeapon(new Bow());
                    break;
                case 4:
                    player.attack();
                    break;
                case 5:
                    playing = false;
                    break;
            }
        }
    }

    /**
     * showOptions
     * 
     * Display a list of possible options the user can input for their next
     * action.
     */
    private void showOptions() {
        
        System.out.println("\nPlease type an option from the menu (ex: > 4)");
        System.out.println("1.) Select large sword\n2.) Select small sword");
        System.out.println("3.) Select bow\n4.) Attack\n5.) Quit");
    }
    
    /**
     * getOption
     * 
     * Prompt the user to enter an option and retrieve it
     * @return input A valid option between 1 and 5 inclusive
     */
    private int getOption() {
        
        Scanner in = new Scanner(System.in);
        int input = 0;
        boolean valid = false;
        
        do {
            
            System.out.print("> ");
            
            // Validate the user has entered valid data
            if (in.hasNextInt()) {
                
                input = in.nextInt();
            } else {
                
                // Default fail value
                input = 0;
                in.next();
            }
            
            if (input <= 0 || input > 5) {
                
                System.out.println("Please enter an option between 1 and 5");
                valid = false;
            } else {
                
                valid = true;
            }
        } while (!valid);
        
        return input;
    }
}