class Node:
    def __init__(self, data):
        self.data = data
        self.next = None

class SinglyLinkedList:
    def __init__(self):
        self.head = None

    def add(self, data):
        newNode = Node(data)

        if self.head is None:
            self.head = newNode
            return
        
        else:
            lastNode = self.head

            while lastNode.next is not None:
                lastNode = lastNode.next

            lastNode.next = newNode

    def printList(self):
        currentNode = self.head

        while currentNode is not None:
            print(currentNode.data)
            currentNode = currentNode.next

    def length(self):
        currentNode = self.head
        length = 0

        while currentNode is not None:
            length += 1
            currentNode = currentNode.next

        return length

    def search(self, data):
        currentNode = self.head

        while currentNode is not None:
            if currentNode.data == data:
                return True
            
            currentNode = currentNode.next

        return False

    def delete(self, data):
        currentNode = self.head

        if currentNode is not None:
            if currentNode.data == data:
                self.head = currentNode.next
                currentNode = None
                return
            
        while currentNode is not None:
            if currentNode.data == data:
                break

            prevNode = currentNode
            currentNode = currentNode.next

        if currentNode is None:
            return
        
        prevNode.next = currentNode.next
        currentNode = None

    #insert at nth position
    def insert(self, data, position):
        newNode = Node(data)

        if position == 1:
            newNode.next = self.head
            self.head = newNode
            return
        
        currentNode = self.head
        currentPosition = 1

        while currentPosition < position - 1:
            currentNode = currentNode.next
            currentPosition += 1

        newNode.next = currentNode.next
        currentNode.next = newNode
    
#driver code as menu
sll = SinglyLinkedList()

while True:
    print("""1. Add
2. Print
3. Length
4. Search
5. Delete
6. Insert at nth position
7. Exit""")

    choice = int(input("Enter your choice: "))

    if choice == 1:
        data = int(input("Enter data: "))
        sll.add(data)
        print()
    
    elif choice == 2:
        sll.printList()
        print()
    
    elif choice == 3:
        print(sll.length())
        print()
    
    elif choice == 4:
        data = int(input("Enter data: "))
        print(sll.search(data))
        print()
    
    elif choice == 5:
        data = int(input("Enter data: "))
        sll.delete(data)
        print()
    
    elif choice == 6:
        data = int(input("Enter data: "))
        position = int(input("Enter position: "))
        sll.insert(data, position)
        print()
    
    elif choice == 7:
        break
    
    else:
        print("Invalid choice")
        continue