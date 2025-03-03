import java.util.HashMap;

// Abstract Class
abstract class Animal {
    abstract void makeSound(); // Abstract method
    void sleep() { // Concrete method
        System.out.println("Sleeping...");
    }
}

// Interface
interface Pet {
    void play();
}

// Implementing both
class Dog extends Animal implements Pet {

    static int staticInt;
    public void makeSound() {
        System.out.println("Woof!");
    }
    public void play() {
        System.out.println("Dog is playing.");
    }

    public static void staticMethod(){
        System.out.println("static method");
    }
}

 final class FinalClass{

}
// //NOT POSSIBLE
// class CheckFinalClassCanBeExtented extends FinalClass{
//     public void methodA(){
//         System.out.println("check");
//     }
// }

class CountingHashMap<K,V> extends HashMap<K,V>{
    private int getCount = 0;
    private int putCount = 0;

    @Override
    public V put(K key,V value){
        putCount++;
        return super.put(key ,value);
    }

    @Override
    public V get(Object key){
        getCount++;
        return super.get(key);
    }

    public int getPutCount(){
        return putCount;
    }

    public int getGetCount(){
        return getCount;
    }
}

public class AbstractClassAndInterface {
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.makeSound(); // Woof!
        dog.sleep(); // Sleeping...
        dog.play(); // Dog is playing.
        final int a = 0;
        //a = 1; //not possible

        //below both calling mechanism are possible
        Dog.staticMethod();
        dog.staticMethod();

        dog.staticInt = 19;
        System.out.println("dog.staticInt" + " = " + dog.staticInt);

        //static var have one copy of its value throughout all instances of class 
        Dog dog2 = new Dog();
        System.out.println("dog2.staticInt" + " = " + dog2.staticInt);

        CountingHashMap<String,Integer> countingHashmap = new CountingHashMap<>();
        countingHashmap.put("kapil", 10);
        countingHashmap.put("neha",15);

        countingHashmap.get("neha");

        System.out.println("get count = " + countingHashmap.getGetCount());
        System.out.println("put count = " + countingHashmap.getPutCount());

    }
}
