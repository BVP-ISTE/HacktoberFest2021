# Count occurrence of a character in a Python string

sentence = 'The Udacity Udacity'
ch = 'e'

def count_chars(s, ch=None):
        '''
        Function to return the occurence of a character
        if no character is given then maximum occurance char
        is returned.
        '''
        if ch != None:
                return list(s).count(ch)
        
        mp = {}
        maxx = 0
        maxx_c = ""
        for i in s:
                if i in mp:
                        mp[i] += 1
                        if mp[i] > maxx:
                                maxx = mp[i]
                                maxx_c = i
                else:
                        mp[i] = 1
                
        return maxx_c

print(count_chars(sentence))
