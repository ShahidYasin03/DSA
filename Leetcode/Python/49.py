class Solution:
    def groupAnagrams(self, strs: list[str]) -> list[list[str]]:
        anagram = {}
        for i in range(len(strs)):
            ascii_key = "".join(sorted(strs[i]))
            if ascii_key not in anagram:
                anagram[ascii_key] = []
            anagram[ascii_key].append(strs[i])
        return list(anagram.values())


# Example test cases for LeetCode 49: Group Anagrams
if __name__ == "__main__":
    sol = Solution()

    tests = [
        (["eat", "tea", "tan", "ate", "nat", "bat"],
         [['eat', 'tea', 'ate'], ['tan', 'nat'], ['bat']]),
        ([""], [[""]]),
        (["a"], [["a"]]),
        (["cab", "tin", "pew", "duh", "may", "ill", "buy", "bar", "max", "doc"],
         [['cab'], ['tin'], ['pew'], ['duh'], ['may'], ['ill'], ['buy'], ['bar'], ['max'], ['doc']]),
        (["listen", "silent", "triangle", "integral", "ad", "da"],
         [['listen', 'silent'], ['triangle', 'integral'], ['ad', 'da']]),
    ]

    for i, (case, expected) in enumerate(tests, 1):
        result = sol.groupAnagrams(case)
        print(f"Test {i}: {result}")
        assert sorted(map(sorted, result)) == sorted(map(sorted, expected))

    print("All tests passed!")