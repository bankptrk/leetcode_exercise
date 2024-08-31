/*
// Definition for a Node.
class Node {
    public int val;
    public List<Node> children;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, List<Node> _children) {
        val = _val;
        children = _children;
    }
}
*/

class Solution {
    public List<Integer> postorder(Node root) {
        List<Integer> res = new ArrayList<>();
        if(root == null) return res;
        traversePostorder(root,res);
        return res;
    }

    private void traversePostorder(Node curr, List<Integer> postorderList){
        if(curr == null) return;
        for(Node child : curr.children) traversePostorder(child,postorderList);
        postorderList.add(curr.val);
    }
}