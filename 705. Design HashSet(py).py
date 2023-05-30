class MyHashSet:

    def __init__(self):
        global hashSet
        hashSet = []

    def add(self, key: int) -> None:
        if key not in hashSet:
            hashSet.append(key)
        

    def remove(self, key: int) -> None:
        if key in hashSet:
            hashSet.remove(key)
        

    def contains(self, key: int) -> bool:
        if key in hashSet:
            return True
        return False
        


# Your MyHashSet object will be instantiated and called as such:
# obj = MyHashSet()
# obj.add(key)
# obj.remove(key)
# param_3 = obj.contains(key)