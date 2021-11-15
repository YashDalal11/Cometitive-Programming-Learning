import java.util.ArrayList;

public class factorialByLinkedList {
    static class Node{
        int data;
        Node next;
        Node(int data){
            this.data=data;
            next=null;
        }
    }
    public static void main(String[] args) {
        int n = 100;
        Node tail = new Node(1);
        for(int i=2;i<=n;i++){
            multiple(i,tail);
        }
        print(tail);
    }

    public static void print(Node tail){
        if(tail==null)
            return;
        print(tail.next);
        System.out.print(tail.data);
    }

    public static void multiple(int x,Node tail){
        int carry = 0;
        Node temp = tail;
        Node prevNode = tail;
        while(temp!=null){
            int sum = (temp.data*x)+carry;
            carry=sum/10;
            temp.data=sum%10;
            prevNode = temp;
            temp=temp.next;
        }
        while(carry!=0){
            prevNode.next = new Node(carry%10);
            carry=carry/10;
            prevNode = prevNode.next;
        }
    }
    

}
