def isPalindrome(self, x: int) -> bool:
        x=str(x)
        y=x[::-1]
        if x==y:
            return True
        return False