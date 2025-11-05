public class JavaBasics {

    public static void bintodecimal(int n){
        int decimal=0;
        int power=0;
        while(n>0){
            int lastdigit=n%10;
            decimal+=lastdigit*Math.pow(2,power);
            power++;
            n=n/10;
        }
        System.out.println(decimal);
    }
    
    public static void decimaltobin(int n){
        int binary=0;
        int power=0;
        while(n>0){
            int remainder=n%2;
            binary+=remainder*Math.pow(10,power);
            power++;
            n=n/2;
        }
        System.out.println(binary);
    }
    public static void main(String []args){
        System.out.println("Hello");
        System.out.println("How are you");
        bintodecimal(101);
        decimaltobin(5);
    }
}