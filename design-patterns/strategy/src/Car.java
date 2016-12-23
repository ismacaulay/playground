package com.ismacaulay;

public class Car {
    private Status _status;

    public Car() {
        this._status = new Working();
    }

    public void setStatus(Status s) {
        this._status = s;
    }

    public void printStatus() {
        this._status.print();
    }
}

