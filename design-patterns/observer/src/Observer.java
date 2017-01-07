
package com.ismacaulay;

public class Observer {

    public static void main(String[] args) {
        
        Person john = new Person("john");
        Person julie = new Person("julie");
        Person dave = new Person("dave");

        john.addListener(julie);
        john.addListener(dave);

        julie.addListener(john);

        dave.addListener(john);
        dave.addListener(julie);

        john.say("Hi julie");
        john.say("Hi dave");

        julie.say("Hi john");
        julie.say("Hi dave");

        dave.say("Hi john");
        dave.say("Hi julie");
    }
}


