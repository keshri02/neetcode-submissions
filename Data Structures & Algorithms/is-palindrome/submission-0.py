class Solution:
    def isPalindrome(self, s: str) -> bool:
        result =""
        for ch in s:
            if ch.isalnum():
                result=result+ch.lower()
        t=result[::-1]
        if result == t:
            return True
        else:
            return False
        