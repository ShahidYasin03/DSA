class Solution:
    def reverseDegree(self, s: str) -> int:
        li = []
        for i in range(26, -1, -1):
            li.append(i)
        sum = 0
        for i in range(len(s)):
            idx = ord(s[i]) - ord('a')
            sum = sum + (li[idx] * (i + 1))
        return sum

assert Solution().reverseDegree("abc") == 75