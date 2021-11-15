import java.util.*;

public class reverseLinkedList{
    static Node head;
    static class Node{
        int data;
        Node nextNode;

        Node(int d){
            data = d;
            nextNode = null;
        }
    }
    public static void main(String[] args) {
        reverseLinkedList ll = new reverseLinkedList();
        Node head = new Node(10);
        Node node2 = new Node(20);
        Node node3 = new Node(30);
        Node node4 = new Node(40);
        Node node5 = new Node(50);

        head.nextNode = node2;
        node2.nextNode = node3;
        node3.nextNode = node4;
        node4.nextNode = node5;

        Node reverseNode =reverseLL(head);
        printLinkedList(reverseNode);

        
    }
    static void printLinkedList(Node node){
        Node temp = node;
        while(temp!=null){
            System.out.println(temp.data);
            temp=temp.nextNode;
        }
    }
    static Node reverseLL(Node head){
        Node curr = head;
        Node prev = null;
        Node next = null;

        while(curr != null){
            next=curr.nextNode;
            curr.nextNode = prev;
            prev = curr;
            curr=next;
        }
        return prev;
    }
}