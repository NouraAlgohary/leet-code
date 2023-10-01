class Solution:
    def reverseWords(self, s: str) -> str:
        perm_string = ""
        result = ""
        
        for i in range(len(s)):
            if(s[i] == " "):
                result += perm_string + " "
                perm_string = ""
            elif i == len(s) - 1:
                perm_string = s[i] + perm_string
                result += perm_string
            else:
                perm_string = s[i] + perm_string

        return result
        