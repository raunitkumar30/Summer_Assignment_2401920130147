package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {

        // Creating Veena object
        Veena v = new Veena();
        v.play();

        // Creating Saxophone object
        Saxophone s = new Saxophone();
        s.play();

        // Using Playable reference
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}
