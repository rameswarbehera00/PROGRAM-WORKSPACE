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

    public static int binarysearch(int a[], int key){
        int start=0;
        int end=a.length-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(a[mid]==key){
                System.out.println("Key found at index: "+mid);
                return mid;
            }
            else if(a[mid]<key){
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
        System.out.println("Key not found");
        return -1;
    }

    public static void reversearray(int a[], int n){
        int start=0;
        int end=n-1;
        while(start<end){
            int temp=a[start];
            a[start]=a[end];
            a[end]=temp;
            start++;
            end--;
        }
    }

    public static void printpairs(int a[]){
        int Totalpairs=a.length*(a.length-1)/2;
        System.out.println("Total pairs: "+Totalpairs);
        for(int i=0;i<a.length;i++){
            for(int j=i+1;j<a.length;j++){
                System.out.print("("+a[i]+", "+a[j]+")");
            }
            System.out.println(" ");
        }
    }
    public static void main(String []args){
        System.out.println("Hello");
        System.out.println("How are you");
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println("You entered: "+n);
        bintodecimal(101);
        decimaltobin(5);
        int a[]={3,5,7,2,8,1};
        getlargestandsmallest(a, a.length);
        binarysearch(a,5);
        reversearray(a, a.length);
        for(int i=0;i<a.length;i++){
            System.out.print(a[i]+" ");
        }
        sc.close();
        System.out.println();
        printpairs(a);
    }
}