import java.util.*;
public class JavaBasics {

    public static void getlargestandsmallest(int a[], int n){
        int largest=Integer.MIN_VALUE;
        int smallest=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(a[i]>largest){
                largest=a[i];
            }
            if(a[i]<smallest){
                smallest=a[i];
            }
        }
        System.out.println("Largest: "+largest);
        System.out.println("Smallest: "+smallest);
    }

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
        int a[]={3,5,7,2,8,1};
        getlargestandsmallest(a, a.length);
    }
}