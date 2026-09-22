class Solution:
    def spiralOrder(self, matrix: list[list[int]]) -> list[int]:
        L = 0
        R = len(matrix[0]) - 1
        T = 0
        B = len(matrix) - 1
        direction = 0
        res = []
        while L <= R and T <= B:
            if direction == 0:
                for i in range(L, R + 1):
                    res.append(matrix[T][i])
                T += 1
            elif direction == 1:
                for i in range(T, B + 1):
                    res.append(matrix[i][R])
                R -= 1
            elif direction == 2:
                for i in range(R, L - 1, -1):
                    res.append(matrix[B][i])
                B -= 1
            elif direction == 3:
                for i in range(B, T - 1, -1):
                    res.append(matrix[i][L])
                L += 1
            direction += 1
            direction = direction % 4
        return res

# Test cases
solution = Solution()
assert solution.spiralOrder([[1, 2, 3], [4, 5, 6], [7, 8, 9]]) == [1, 2, 3, 6, 9, 8, 7, 4, 5]
assert solution.spiralOrder([[1, 2, 3, 4], [5, 6, 7, 8]]) == [1, 2, 3, 4, 8, 7, 6, 5]
        