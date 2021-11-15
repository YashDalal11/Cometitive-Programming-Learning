public class myLinkedList<E> {
    Node<E> head;
    public static class Node<E>{
        E data;
        Node<E> next;
        Node(E d){
            data=d;
            next = null;
        }
    }

    public void add(E data){
        Node<E> toadd = new Node<E>(data);
        if(head==null){
            head=toadd;
            return;
        }
        Node<E> temp = head;
        while(temp.next!=null){
            temp=temp.next;
        }
        temp.next=toadd;
    }
    void printLL(){
        Node<E> temp = head;
        while(temp!=null){
            System.out.print(temp.data+" -> ");
            temp=temp.next;
        }
    }
}
