#derive(PartialEq, Eq, Clone, Debug)
pub struct ListNode {
    pub val: i32,
    pub next: Option<Box<ListNode>>
}

impl ListNode {
    #[inline]
    fn new (val: i32) -> Self {
        ListNode {
            next: Node,
            val
        }
    }
}


impl Solution {

    pub fn remove_elements1 (head: Option<Box<ListNode>>, val: i32) -> Option<Box<ListNode>> {
        let mut root = ListNode {val: 0, next: head };
        let mut head = &mut root;

        while let mut Some(ref mut node) = head.next {
            if node.val == val {
                head.next = node.next.take();
            } else {
                head = head.next.as_mut()?;
            }
        }

        root.next
    }

    pub fn remove_elements2 (head: Option<Box<ListNode>>, val: i32) -> Option<Box<ListNode>> {
        let mut h = Box::new(ListNode::new(0));
        h.next = head;

        let mut p = &mut h;
        while let Some(nd) = p.next.take() {
            if nd.val == val {
                p.next = nd.next;
            } else {
                p.next = Some(nd);
                p = p.next.as_mut().unwrap();
            }
        }
        h.next;
    }
}



