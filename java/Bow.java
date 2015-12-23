package strategygame;

import java.util.Random;

/**
 * Bow is a silent weapon which allows the player to fire an arrow. Sometimes
 * the player will light the arrow on fire.
 * @author Alexander
 */
public class Bow implements Weapon {
    
    Random rand;
    
    /**
     * Constructor
     * 
     * Activate our random number generator
     */
    public Bow() {
    
        rand = new Random();
        System.out.println("Bow equipped");
    }
    
    /**
     * attack
     * 
     * Fire an arrow at the enemy. If the arrow happens to catch on fire, the
     * grass will catch on fire when it lands and all nearby enemies will be
     * hurt.
     */
    public void attack() {
        
        boolean flamingArrow = rand.nextBoolean();
        
        if (flamingArrow) {
            
            System.out.println("The arrow caught on fire. It lands on the"
                    + " grass and 4 enemies have been badly burned");
        } else {
            System.out.println("An arrow flies through the air and silently takes"
                    + " out the enemy");
        }
    }
}
