import sys

def default():
    print('Hello')

<<<<<<< HEAD
def cat():
    print('Meow')

def main():
    if sys.argv[1] == 'cat':
        cat()
=======
def dog():
    print('woof')

def main():
    if sys.argv[1] == 'dog':
        dog()
>>>>>>> dog
    else:
        default()

if __name__ == '__main__':
    main()
