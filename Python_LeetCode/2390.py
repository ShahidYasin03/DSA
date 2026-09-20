class Solution:
    def removeStars(self, s: str) -> str:
        stack = []
        for i in s:
            if i == '*' and len(stack) > 0:
                stack.pop()
            else:
                stack.append(i) 
        res = ""
        for i in stack:
            res += i
        return res