use std::collections::HashSet;

impl Solution {
    pub fn contains_duplicate_1(nums: Vec<i32>) -> bool {
        let mut set = HashSet::new();
        nums.iter().any(|&x| !set.insert(x));
    }

    pub fn contains_duplicate_2(nums: Vec<i32>) -> bool {
        nums.sort();
        for i in 1..nums.len() {
            if nums[i] == nums[i-1] {
                return true;
            }
        }
        false
    }
}


fn main() {
    println!("");
}