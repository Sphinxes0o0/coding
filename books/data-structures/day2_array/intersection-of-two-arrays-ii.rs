use std::collections::HashMap;

struct Solution;

impl Solution {
    pub fn intersect(nums1: Vec<i32>, nums2: Vec<i32>) -> Vec<i32> {
        let mut ans = vec![];
        let mut map = HashMap::new();
        for n in &nums1 {
            *map.entry(n).or_insert(0) += 1;
        }
        for n in nums2 {
            if let Some(cnt)  = map.get_mut(&n) {
                if *cnt > 0 {
                    *cnt -= 1;
                    ans.push(n);
                }
            }
        }
        ans
    }

    pub fn intersect2(mut nums1: Vec<i32>, mut nums2: Vec<i32>) -> Vec<i32> {
        nums1.sort();
        nums2.sort();
        let (mut i, mut j, mut r) = (0usize, 0usize, Vec::<i32>::new());
        while i < nums1.len() && j  < nums2.len() {
            if nums1[i] < nums2[j] {
                i += 1;
            } else if nums1[i] > nums2[j] {
                j += 1;
            } else {
                r.push(nums1[i]);
                i += 1;
                j += 1;
            }
        }
        r
    }
}


fn main() {
    let mut map = HashMap::new();
    for i in 0..10 {
        let n = map.entry(i).or_insert(0);
        *n += 1;
        println!("{:?}", n);
    }

}