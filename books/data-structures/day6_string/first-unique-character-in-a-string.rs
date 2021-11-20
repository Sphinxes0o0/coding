use std::collections::HashMap;

struct Solution;

impl Solution {
    pub fn first_uniq_char(s: String) -> i32 {
        let mut map = HashMap::new();
        s.chars().for_each(|c| *map.entry(c).or_insert(0) += 1);
        for (i, c) in s.chars().enumerate() {
            if map[&c] == 1 {
                return i as i32;
            }
        }
        -1
    }
}


fn main() {
    
}
