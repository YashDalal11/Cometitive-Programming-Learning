public class reorder<E> {
    Node<E> head;
    public class Node<E>{
        E data;
        Node next;

        Node(E d){
            data = d;
            next= null;
        }
    }

    public static void main(String[] args) {
        reorder<Integer> ll = new reorder<>();
        ll.add(1);
        ll.add(2);
        ll.add(3);
        ll.add(4);
        ll.add(5);
        ll.add(6);
        ll.printLL();
        ll.reordering(ll);
    }

    void reordering(reorder ll){
        

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
