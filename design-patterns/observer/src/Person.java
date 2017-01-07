
package com.ismacaulay;

import java.util.ArrayList;

public class Person implements SpeechListener {

    private String name;
    private ArrayList<SpeechListener> listeners;

    Person(String name) {
        this.name = name;
        this.listeners = new ArrayList<SpeechListener>();
    }

    public void addListener(SpeechListener listener) {
        listeners.add(listener);
    }

    public void listen(String speech) {
        if(speech.contains(name)) {
            System.out.println(this.name + ": Hi");
        }
    }

    public void say(String speech) {
        System.out.println(this.name + ": " + speech);
        for(SpeechListener listener : listeners) {
            listener.listen(speech);
        }
    }
}

