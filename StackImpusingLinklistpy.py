class link:
    def __init__(self, n):
        self.n = n
        self.t = None


class stackwithLinklist:
    def __init__(self):
        self.high = None

    def emptyfn(self):
        if self.high == None:
            return True
        else:
            return False

    def Pushfn(self, n):

        if self.high == None:
            self.high = link(n)

        else:
            link1 = link(n)
            link1.t = self.high
            self.high = link1

    def Popfn(self):
        if self.emptyfn():
            return None
        else:
            Popelement = self.high
            self.high = self.high.t
            Popelement.t = None
            return Popelement.n

    def Peekfn(self):
        if self.emptyfn():
            return None
        else:
            return self.high.n

    def Printfn(self):
        i = self.high
        if self.emptyfn():
            print("Stack is Underflow")
        else:
            while (i != None):
                print(i.n, " ", end=" ")
                i = i.t
            return
Sa = stackwithLinklist()

Sa.Pushfn(11)
Sa.Pushfn(12)
Sa.Pushfn(13)
Sa.Pushfn(14)
Sa.Pushfn(15)
Sa.Pushfn(16)
Sa.Printfn()

print("\nhigh element of the stack is ", Sa.Peekfn())
Sa.Popfn()
Sa.Popfn()
Sa.Popfn()
Sa.Popfn()
Sa.Printfn()

print("\nhigh element of the stack is ", Sa.Peekfn())

