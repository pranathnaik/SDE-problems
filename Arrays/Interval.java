package Arrays;

import java.util.Scanner;

class Interval {
    int start;
    int end;

    Interval(int start, int end) {
        this.start = start;
        this.end = end;
    }

    public static void sort(Interval a[]) {
        for (int i = 0; i < a.length; i++) {
            for (int j = 0; j < a.length; j++) {
                if (a[i].start < a[j].start) {
                    int temp = a[i].start;
                    a[i].start = a[j].start;
                    a[j].start = temp;

                    temp = a[i].end;
                    a[i].end = a[j].end;
                    a[j].end = temp;
                }
            }
        }
    }

    public static void merge(Interval a[]) {
        Interval b[] = new Interval[a.length];
        for (int i = 0; i < b.length; i++) {
          b[i]= new Interval(0,0);
        }
        for (int i = 0; i < a.length-1; i++) {
            if (a[i + 1].end > a[i].end) {
              //swap
                
            }
        } 
    }

    public static void display(Interval a[]) {
        for (int i = 0; i < a.length; i++)
            System.out.println("(" + a[i].start + "," + a[i].end + ")");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        Interval a[] = new Interval[size];
        int s, e;
        for (int i = 0; i < a.length; i++) {
            s = sc.nextInt();
            e = sc.nextInt();
            a[i] = new Interval(s, e);
        }
        display(a);
        sort(a);
        display(a);
        merge(a);    
        sc.close();
    }
}
