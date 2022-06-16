
import java.io.*;
import java.util.*;


public class Test extends Thread {


    public static void main(String[] args) {

       
        Thread t = Thread.currentThread();

        
        System.out.println("Current thread: "
                + t.getName());

       
        t.setName("Geeks");
        System.out.println("After name change: "
                + t.getName());

      
        System.out.println("Main thread priority: "
                + t.getPriority());

       
        t.setPriority(MAX_PRIORITY);

        
        System.out.println("Main thread new priority: "
                + t.getPriority());

        for (int i = 0; i < 5; i++) {
            System.out.println("Main thread");
        }

        
        Thread ct = new Thread() {
            // run() method of a thread
            public void run() {

                for (int i = 0; i < 5; i++) {
                    System.out.println("Child thread");
                }
            }
        };

        System.out.println("Child thread priority: "
                + ct.getPriority());

        // Setting priority of Main thread to MIN(1)
        ct.setPriority(MIN_PRIORITY);

        System.out.println("Child thread new priority: "
                + ct.getPriority());

        // Starting child thread
        ct.start();
    }
}

// Class 2
// Helper class extending Thread class
// Child Thread class
class ChildThread extends Thread {

    @Override
    public void run() {

        for (int i = 0; i < 5; i++) {

            // Print statement whenever child thread is
            // called
            System.out.println("Child thread");
        }
    }
}
