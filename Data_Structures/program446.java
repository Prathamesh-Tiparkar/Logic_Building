// LL created explicitly in java

class node
{
    public int data;
    public node next;
}

class program446
{
    public static void main(String A[])
    {
        node head = null;

        node obj1= null;        // reference created
        node obj2 = null;
        node obj3 = null;

        obj1 = new node();      // memory allocated
        obj2 = new node();
        obj3 = new node();

        obj1.data = 11;
        obj2.data = 21;
        obj3.data = 51;

        obj1.next = obj2;       // LL created 
        obj2.next = obj3;
        obj3.next = null;

        head = obj1;            

        System.out.println(head.data);
        System.out.println(head.next.data);
        System.out.println(head.next.next.data);

    }
    
}
