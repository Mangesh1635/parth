
def getMaximumContinuousUptime(log, k):
    n = len(log)

    # Consecutive ones immediately before each position
    left = [0] * (n + 1)

    for i in range(n):
        if log[i] == '1':
            left[i + 1] = left[i] + 1

    # Consecutive ones immediately after each position
    right = [0] * (n + 1)

    for i in range(n - 1, -1, -1):
        if log[i] == '1':
            right[i] = right[i + 1] + 1

    # Maximum consecutive ones without modification
    ans = max(left)

    # Try every possible substring of length k
    for i in range(n - k + 1):
        current = left[i] + k + right[i + k]
        ans = max(ans, current)

    return ans
