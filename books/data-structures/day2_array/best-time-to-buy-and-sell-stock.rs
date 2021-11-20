
#[warn(dead_code)]
struct Solution;

impl Solution {
    pub fn max_profit(prices: Vec<i32>) -> i32 {
        let mut min = if prices.len() > 0 { prices[0] } else { 0 };
        let mut max = 0;

        for i in 1..prices.len() {
            max = max.max(prices[i] - min);
            if prices[i] < min { min = prices[i]; }
        }
        max
    }
}

fn main() {

}