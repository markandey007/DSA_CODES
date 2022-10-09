//Morris Traversal_Binary Search Trees
import java.util.ArrayList;

class Node {
    int data;
    Node left;
    Node right;

    Node(int key) {
        this.data = key;
    }
}

public class MorrisTraversal {
    static ArrayList traverse(Node root) {
        ArrayList<Integer> lis = new ArrayList<>();
        Node curr = root;

        while (curr != null) {
            if (curr.left == null) {
                lis.add(curr.data);
                curr = curr.right;
            }

            else {
                Node prev = curr.left;
                while (prev.right!=null && prev.right!=curr) 
                {
                    prev = prev.right;
                }

                if (prev.right == null) {
                    prev.right = curr;
                    curr = curr.left;
                } else {
                    prev.right = null;
                    lis.add(curr.data);
                    curr = curr.right;
                }
            }
        }

        return lis;
    }

    public static void main(String[] args) {
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);
        root.right.left = new Node(5);
        root.right.right = new Node(8);

        ArrayList<Integer> ans=traverse(root);
        System.out.println(ans);
    }
}
