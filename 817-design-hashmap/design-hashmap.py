class MyHashMap:

    def __init__(self):
        self.mapKey=[]
        self.mapValue=[]

    def put(self, key: int, value: int) -> None:
        if key not in self.mapKey:
            self.mapKey.append(key)
            self.mapValue.append(value)
        else:
            self.mapValue[self.mapKey.index(key)]=value
    
    def get(self, key: int) -> int:
        if key not in self.mapKey:
            return -1
        else:
            return self.mapValue[self.mapKey.index(key)]

    def remove(self, key: int) -> None:
        if key in self.mapKey:
            ind=self.mapKey.index(key)
            self.mapKey.pop(ind)
            self.mapValue.pop(ind)
        


# Your MyHashMap object will be instantiated and called as such:
# obj = MyHashMap()
# obj.put(key,value)
# param_2 = obj.get(key)
# obj.remove(key)