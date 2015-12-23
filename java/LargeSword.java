package strategygame;

import java.util.Random;

/**
 * LargeSword is a large Weapon which can do massive damage to the enemy.
 * Due to its size it takes a lot of effort to swing, thus you might miss
 * your target.
 * @author Alexander
 */
public class LargeSword implements Weapon{
    
    Random rand;
    
    /**
     * Constructor
     * 
     * Activate our random number generator
     */
    public LargeSword() {
        
        rand = new Random();
        System.out.println("Large sword equipped");
    }
    
    /**
     * attack
     * 
     * Attack the enemy and determine if it was a hit or miss
     */
    public void attack() {
        
        boolean criticalHit = rand.nextBoolean();
        
        if (criticalHit) {
            
            System.out.println("You swing your sword. Critical hit!");
        } else {
            
            System.out.println("You swing your sword. Too slow, you missed");
        }
    }
    
}
