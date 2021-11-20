
struct Solution;
impl Solution {

    bool isValid2(string s) {
        let mut stack = vec![];
        
        for c in s.chars() {
            match c {
                '{' => stack.push('}'),
                '[' => stack.push('['),
                ']' => stack.push(')'),
                '}'|']'|')' if Some(c) != stack.pop() => return false,
            }
        }
        stack.is_empty()
    }

    pub fn is_valid(s: String) -> bool {
        
        // 如果 String 的长度是基数直接返回 false
        if s.len() % 2 == 1 {
            return false;
        }

        // 通过右括号来匹配左括号
        let match_map = {
            let mut m = std::collections::HashMap::new();
            m.insert(')','(');
            m.insert(']','[');
            m.insert('}','{');
            m 
        };
        
        // 模拟 stack， 用来存左边的括号
        let mut stack = vec![];

        // 如果遍历到左括号就加入 stack 
        // 如果遍历到右边的括号就在 stack 里面找
        // 遵循就近原则，如果最近的两个反向的符号不是匹配的
        // 就直接返回 false
        // 如果匹配成功就 stack.pop()
        for c in s.chars(){
            if let Some(&val) = match_map.get(&c) {
                match stack.pop(){
                    None      => return false,
                    Some(pop) =>{
                        if pop == val{
                            continue;
                        }else{
                            return false;
                        }
                    }
                }
            }else{
                stack.push(c);
            }
        }

        // 到这里整个字串已经跑完了
        // 如果此时 stack 里面仍然有值，返回 false
        stack.len() == 0
    }
}

