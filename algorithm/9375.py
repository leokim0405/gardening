test_case_n = int(input())

result_list = []

for i in range(test_case_n):
    cloth_n = int(input())
    clothes_list = []
    for n in range(cloth_n):
        clothes_list.append(input())
    category = []
    category_n = []
    for cloth in clothes_list:
        if category.count(cloth.split(' ')[1]) == 0:
            category.append(cloth.split(' ')[1])
            category_n.append(1)
        else:
            category_n[category.index(cloth.split(' ')[1])] += 1
    result = 1
    for cloth_count in category_n:
        result *= cloth_count+1
    result_list.append(result - 1)

for r in result_list:
    print(r)
