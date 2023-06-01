

def do_twice(func,arg):
    func(arg)
    func(arg)

def print_spam():
    print("spam")

def print_twice(bruce):
    print(bruce)
    print(bruce)

do_twice(print_twice,"spam")
