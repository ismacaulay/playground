
package com.ismacaulay;

public class Strategy {

    public static void main(String[] args) {

        Car car = new Car();
        car.printStatus();

        car.setStatus(new FlatTire());
        car.printStatus();

        car.setStatus(new SqueakyBreaks());
        car.printStatus();

        car.setStatus(new WeirdSound());
        car.printStatus();

        car.setStatus(new Working());
        car.printStatus();
    }
}


