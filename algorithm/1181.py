N = int(input())

word_list = []

for a in range(N):
    word_list.append(input())

word_list.sort()

sorted_list = []

for lenth in range(51):
    for word in word_list:
        if len(word) == lenth:
            sorted_list.append(word)

while True:
    sp = 0;
    for over in sorted_list:
        if sorted_list.count(over) != 1:
            sorted_list.remove(over)
            sp += 1
    if sp == 0:
        break

for word_ in sorted_list:
    print(word_)