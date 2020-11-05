package Arrays;
import java.util.Scanner;
import java.util.Stack;

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
        Stack<Interval> st = new Stack<>();
        st.push(a[0]);
        for (int i = 1; i < a.length; i++) {

            Interval topstack = st.peek();

            if (topstack.end < a[i].start)
                st.push(a[i]);
            else if (topstack.end < a[i].end) {
                topstack.end = a[i].end;
                st.pop();
                st.push(topstack);
            }
        }

        while (!st.isEmpty()) {
            Interval dis = st.pop();
            System.out.println("(" + dis.start + "," + dis.end + ")");
        }
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
        sort(a);
        System.out.println("");
        merge(a);
        sc.close();
    }
}
