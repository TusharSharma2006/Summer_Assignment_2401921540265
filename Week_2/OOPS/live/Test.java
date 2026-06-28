package live;

import music.Playable;
import music.string.Veena;
import music.wind.Saxophone;

public class Test {

    public static void main(String[] args) {

        // Created an instance of Veena and called play() veeree ..... 
        Veena v = new Veena();
        v.play();

        // Created an instance of Saxophone and called play() Paaji ....
        Saxophone s = new Saxophone();
        s.play();

        // Now Using Playable reference .....
        Playable p;

        p = new Veena();
        p.play();

        p = new Saxophone();
        p.play();
    }
}