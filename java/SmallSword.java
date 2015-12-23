package strategygame;

/**
 * SmallSword is a small weapon which will always hit the enemy. The
 * amount of damage is small.
 * @author Alexander
 */
public class SmallSword implements Weapon {
    
    /**
     * Constructor
     * 
     * Notify we have equipped a Small Sword
     */
    public SmallSword() {
        
        System.out.println("Small sword equipped");
    }
    
    /**
     * attack
     * 
     * Swing the sword and hurt the enemy
     */
    public void attack() {
        
        System.out.println("You swing your sword. The enemy is hurt");
    }
}
