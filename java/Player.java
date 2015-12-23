package strategygame;

/**
 * The Player equips a weapon. This weapon can be exchanged for another
 * at any time. When a weapon is equipped, the player can attack enemies
 * with it.
 * @author Alexander
 */
public class Player {
    
    private Weapon weapon;
    
    /**
     * Constructor
     * 
     * Start off without any weapon equipped
     */
    public Player() {
        
        weapon = null;
    }
    
    /**
     * changeWeapon
     * 
     * Changes the weapon being used by the player
     * @param weapon The new weapon
     */
    public void changeWeapon(Weapon weapon) {
        
        this.weapon = weapon;
    }
    
    /**
     * attack
     * 
     * Allow the player to attack using his/her currently equipped weapon
     */
    public void attack() {
        
        if (weapon != null) {
            
            weapon.attack();
        } else {
            
            System.out.println("You don't have a weapon equipped!");
        }
    }
}
