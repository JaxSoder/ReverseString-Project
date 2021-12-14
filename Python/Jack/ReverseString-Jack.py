def main():
    word = "Hello"
    final_reversed_string = ReverseString(word)

    print(final_reversed_string)



def ReverseString(string):
    i = len(string) - 1
    
    reversed_string = ""

    j = 0
    for x in string:
        reversed_string = reversed_string + string[i]
        i-=1
        j+=1

    return reversed_string
    

if __name__ == "__main__":
    main()


